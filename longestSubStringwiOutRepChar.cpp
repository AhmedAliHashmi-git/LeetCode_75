#include <iostream>
#include <set>
using namespace std;

class Solution
{
public:
    int max(int l1, int l2)
    {
        if (l1 > l2)
        {
            return l1;
        }
        return l2;
    }

    int lengthOfLongestSubstring(string s)
    {
        set<char> setChar;
        int start = 0;
        int end = 0;
        int maxLen = 0;
        
        while (start < s.size())
        {
            if (setChar.find(s[start]) == setChar.end())
            {
                setChar.insert(s[start]);
                start++;
                maxLen = max(maxLen, start - end);
            }
            else
            {
                setChar.erase(s[end]);
                end++;
            }
        }
        
        return maxLen;
    }
};

int main()
{
    Solution sol;
    string s = "bbbbb";
    cout<<sol.lengthOfLongestSubstring(s);
    return 0;
}
