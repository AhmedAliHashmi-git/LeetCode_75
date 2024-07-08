#include <iostream>
using namespace std;

struct Node {
    Node* next;
    char data;
};

class Solution {
private:
    Node* top;

public:
    Solution() {
        top = nullptr;
    }

    void push(char ch) {
        Node* newNode = new Node();
        if (!newNode) {
            cout << "Heap Overflow";
            return;
        }
        newNode->data = ch;
        newNode->next = top;
        top = newNode;
    }

    char pop() {
        if (top == nullptr) {
            cout << "Stack Underflow";
            return '\0';
        }
        Node* temp = top;
        top = top->next;
        char popped = temp->data;
        delete temp;
        return popped;
    }

    string checkSpaces(string s) {
        int length = s.length();

        while (length > 0 && s[0] == ' ') {
            s.erase(0, 1);
            length--;
        }

        while (length > 0 && s[length - 1] == ' ') {
            s.erase(length - 1, 1);
            length--;
        }

        for (int i = 1; i < length - 1; i++) {
            if (s[i] == ' ' && s[i + 1] == ' ') {
                s.erase(i, 1);
                length--;
                i--;
            }
        }

        return s;
    }

    string reverseWords(string s) {
        string returnString = checkSpaces(s);
        int length = returnString.length();
        int start = 0;

        for (int i = 0; i < length; i++) {
            if (returnString[i] == ' ' || i == length - 1) {
                int end = (i == length - 1) ? i : i - 1;
                while (end >= start) {
                    push(returnString[end]);
                    end--;
                }
                if (i != length - 1) {
                    push(' ');
                }
                start = i + 1;
            }
        }

        string reversedWords;
        while (top != nullptr) {
            char ch = pop();
            reversedWords += ch;
        }

        return reversedWords;
    }
};

int main() {
    Solution solution;
    string input = "Hello World!";
    string reversed = solution.reverseWords(input);
    cout<< reversed << endl;
    return 0;
}
