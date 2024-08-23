#include<iostream>
using namespace std;

class Solution {
public:


    bool isVowel(char c){
        return c == 97 || c == 101 || c == 105 || c == 111 || c == 117;
    }
    int count(string s , int k){
        int count;
        for(int i = 0 ; i < k ; i++){
            if(isVowel(s[i])){
                count++;
            }
            
        }
        return count;
    }
//    abciiidef
    void maxVowels(string s, int k) {
        int count = 0;
        int len = s.length();
        string s2 = "";
        for(int i = 0 ; i < k ; i++){
            s2+=s[i];
            if(isVowel(s[i])){
                count++;
            }
            
        }
        int count2 = count;
        for(int i = k ; i < len ; i++){
             
        }

    
        
        cout<<count;
    }
};


int main(){
    Solution sol;
    string s = "abciiidef";
    int k = 3;
    sol.maxVowels(s , k);
    return 0;
}



























