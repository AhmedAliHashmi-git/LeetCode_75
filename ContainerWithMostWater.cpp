#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int min(int a , int b){
        return a < b ? a : b;
    }
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int area;
        int maxArea = 0;
        while(left < right){
            area = min(height[left] , height[right]) * (right - left);
            if(maxArea < area){
                maxArea = area;
            }
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};


int main(){
    Solution sol;
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    cout<<sol.maxArea(arr);
    return 0;
}