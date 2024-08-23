#include<iostream>
#include<vector>
using namespace std;
class Solution{
   public:
   vector<int> twoSum(vector<int>& nums, int target) {
       
        bool check = false;
        vector<int> values(2);
        int a = 0;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[a]+nums[i] == target && a != i){
                values[0] = a;
                values[1] = i;
                check = true;
                break;
            }else{
                if(a == nums.size()){
                    break;
                }
                
                if( i == nums.size()-1){
                    a++;
                    i = 1;
                }
            }

            
        }
       
        
        return values;
        
    }
};



int main(){
    vector<int> arr= {3,2,4};
    Solution sol;
    vector<int>value = sol.twoSum(arr , 6);
    for(int i : value){
        cout<<i<<" ";
    }
    return 0;
}