#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void swap(int &num1, int &num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    // 0,1,3,12
    void moveZeroes(vector<int> &nums)
    {

        int *left = nums.data();
        int *right = nums.data()+1;
         int *p = nums.data();
        for (int i = 0; i < nums.size()-1; i++)
        {
            if(*left != 0 && *right != 0){
                left++;
                right++;
            }
            else if(*left == 0 && *right != 0){
                swap(*left , *right);
                right++;
                left++;
            
            }
            else if(*right == 0 && *left != 0){
                right++;
                left++;
            }
            else if(*left == 0 && *right == 0){
                right++;
            }
        }
      

        for (int i = 0; i < nums.size(); i++)
        {
            cout << *(p + i) << " ";
        }
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {0,0,0,3,7,9,0,12};
    sol.moveZeroes(arr);
    return 0;
}