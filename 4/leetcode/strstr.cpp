#include <string>
#include <iostream>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n1 = haystack.length(), n2 = needle.size(), ind;

        if (n2 == 0)
            return 0;

        for (int i = 0; i < n1; i++)
        {
            ind = 0;

            while (haystack[i + ind] == needle[ind])
            {
                if (ind == n2 - 1)
                    return i;
                ind++;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    cout << s.strStr("mississippi", "issip") << endl;
}