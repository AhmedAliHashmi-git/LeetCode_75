#include <iostream>
#include <vector>
#include<string.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
       int n = chars.size();
       string s = "";
       int count = 1;
       int index = 0;
       int i;
       for( i = 1 ; i < n ; i++){
        if(chars[i] == chars[i-1]){
            count++;
        }else{
            if(count > 1){
                 s+=chars[i-1]+to_string(count);
                
            }
            else{
                s+=chars[i-1];
            }
             count = 1;
        }
       }
       if(count > 1){
        s+=chars[i-1]+to_string(count);
       }
       else {
        s+=chars[i-1];
       }
      chars.resize(s.length());
       copy(s.begin(),s.end(),chars.begin());
    //     for (char c : chars) {
    //     cout << c;
    // }
    return chars.size();
       

    }
};



int main() {
    vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    Solution sol;
    cout<<sol.compress(chars);
    return 0;
}
