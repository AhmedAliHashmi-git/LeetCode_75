#include<iostream>
#include<vector>
// #include<limits>

using namespace std;


class Solution{
   public:
   bool check = true;
   //...5,4,3,2,1
   bool increasingTriplet(vector<int>& nums) {
    int FIRST = INT_MAX;
   int SECOND = INT_MAX;
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] > FIRST && nums[i] > SECOND){
            check = false;
            break;
        }
        if(FIRST >= nums[i]){
            FIRST = nums[i];
        }
        else {
            SECOND = nums[i];
        }
    }
    if(!check){
        return true;
    }
        return false;

    
}
};

int main(){
    Solution sol;
    vector<int> arr = {2,1,5,0,4,6};
    bool result = sol.increasingTriplet(arr);
    cout<<(result? "true" : "false");
    return 0;
}