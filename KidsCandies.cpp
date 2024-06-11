#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
vector<bool> kidsWithCandies(vector<int>& candies , int extraCandies){
      int max = candies[0];
      for(int i = 0 ; i < candies.size(); i++){
        if(max < candies[i]){
            max = candies[i];
        }
      }
       vector<bool> resultCandies(candies.size());

       for(int i = 0 ; i < candies.size() ; i++){
        resultCandies[i] = (candies[i]+extraCandies >= max);
       }
       return resultCandies;
}

};




int main(){
    Solution sol;
    vector<int> kids = {2,3,5,1,3};
    int extra = 3;
    vector<bool> result = sol.kidsWithCandies(kids , extra);
    for(int i = 0 ; i < result.size() ; i++){
        cout<<(result[i]?"true" : "false")<<" ";
    }
}