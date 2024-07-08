#include<iostream>
using namespace std;

class Solution {
public:
    bool check(int c) { 
        return c == 65 || c == 69 || c == 73 || c == 79 || c == 85 || 
               c == 97 || c == 101 || c == 105 || c == 111 || c == 117;
    }

    void swap(char &first, char &last) {
        char temp = first;
        first = last;
        last = temp;
    }

    string reverseVowels(string s) {
        int length = s.length();
        int i = 0, j = length - 1;

        while (i < j) {
            bool first = check(s[i]);
            bool last = check(s[j]);

            if (first && last) {
                swap(s[i], s[j]);
                i++;
                j--;
            } else if (first) {
                j--;
            } else {
                i++;
            }
        }

        return s;
    }
};

int main() {
    Solution sol;
    string s = "Hello";
    string result = sol.reverseVowels(s);
    cout << result << endl; 

    return 0;
}
