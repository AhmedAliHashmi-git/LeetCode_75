#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string str1, string str2)
    {
        int len1 = str1.length();
        int len2 = str2.length();
        char *p = &str1[0];
        char *q = &str2[0];
        int count = 0;

        for (int i = 0; i < len2; i++)
        {
            if (*p == *q)
            {
                count++;
                p++;
                q++;
            }
            else if (*p != *q)
            {
                q++;
            }
        }
        if (count == len1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    string str1 = "abc";
    string str2 = "ahbgdc";
    bool result = sol.isSubsequence(str1, str2);
    cout<<(result? "true" : "false");
    return 0;
}