#include<iostream>
using namespace std;

class Solution{
    public:
    double sqrt(double val , double n = 0.0){
    if(n*n == val){
        return n;
    }
    
    return sqrt(val , n+1);
}
};



int main(){
    Solution sol;
    double num = 49;
    cout<<sol.sqrt(num);
    return 0;
}