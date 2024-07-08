#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int num = nums.size();
        vector<int> values(nums.size());
        vector<int> numbers(nums.size());
        numbers = nums;
        int mul = 1;
        int n = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i != n){
                mul*=nums[i];
                values[n] = mul;
                nums[i] = numbers[i];
            
            }
            
            if(i == nums.size()-1 && n != nums.size()-1){
                i = -1;
                n++;
                mul = 1;
            }

        }
        
         return values;
    }
   
    
};


int main(){
    Solution sol;
    vector<int> arr = {1,2,3,4};
    vector<int> result= sol.productExceptSelf(arr);

    for(int i = 0 ; i < result.size() ; i++){
        cout<<result[i]<<" ";
    }

}