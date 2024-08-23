#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    vector<int> remove(vector<int>& nums , int k , int l){
        vector<int> nums2;
        nums2.reserve(nums.size());
        for (int num : nums) {
        if (num != k && num != l) {
            nums2.push_back(num);
        }
    }
       
        return nums2;
    }
    
public:

    // 1,2,3,4
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); // Sort the array
        int left = 0;
        int right = nums.size() - 1;
        int count = 0;

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == k) {
                count++;
                left++;
                right--;
            } else if (sum < k) {
                left++;
            } else {
                right--;
            }
        }

        return count;
    }

    
};

int main(){
    Solution sol;
    vector<int> nums = {1,2,3,4};
    cout<<sol.maxOperations(nums , 5);
    return 0;

}