#include<iostream>
#include<vector>
using namespace std;


// 1,12,-5,-6,50,3
class Solution {
public:

    int max(vector<int>& nums){
        int max = INT_MIN;
        for(int i = 0; i < nums.size() ; i++){
            if(max < nums[i]){
                max = nums[i];
            }
        }
        return max;
    }

    double findMaxAverage(vector<int>& nums, int k) {
        vector<int> num2(nums.size() , 0);
        int j = -1;
        int l = 0;
        int t = k;
        int p = 1;
        for(int i = 0 ; i < k ; i++){
            num2[l] += nums[i];
            if(i == nums.size()-1){
                break;
            }
            if(i == k-1){
                j++;
                i=j;
                k++;
                l++;
                p++;
            }

            
        }
        num2.resize(p);
        int val = max(num2);

        double avg = (double)val / t;
        return avg;


    }
};





int main(){
    Solution sol;
    vector<int> nums = {-1};
    int k = 1;
   cout<<sol.findMaxAverage(nums , k);
    return 0;
}