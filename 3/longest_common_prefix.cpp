#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 0)
            return "";
        if (strs.size() == 1)
            return strs[0];

        string prefix = "", latest_stable;
        int n = strs.size(), cur = -1;

        while (true)
        {

            latest_stable = prefix;

            if (prefix.size() < strs[0].size())
            {
                prefix += strs[0][prefix.size()];
                cur++;
            }
            else
                return prefix;

            for (int i = 0; i < n; i++)
            {
                if (prefix.size() > strs[i].size() or prefix[cur] != strs[i][cur])
                    return latest_stable;
            }
        }

        return prefix;
    }
};

int main()
{
    vector<string> V = {"flower",
                        "flow",
                        "flight"};

    Solution s;
    cout << s.longestCommonPrefix(V) << endl;
}