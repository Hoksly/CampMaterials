#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int find(vector<int> &nums, int qq, int skip = -1)
{
    for (int i = 0; i < nums.size(); i++)
        if (qq == nums[i] && i != skip)
            return i;
}
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<int> cp = nums;

        vector<int> ret(2);
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        int tmp;

        while (r - l)
        {
            tmp = nums[r] + nums[l];

            if (tmp == target)
            {
                ret[0] = find(cp, nums[l]);
                ret[1] = find(cp, nums[r], ret[0]);
                return ret;
            }
            if (tmp > target)
                r--;
            else
                l++;
        }

        ret[0] = l;
        ret[1] = r;
        return ret;
    }
};

int main()
{
    vector<int> V = {3, 3};
    Solution s;
    vector<int> res = s.twoSum(V, 6);
    cout << res[0] << ' ' << res[1] << endl;
}

// [2,7,11,15] target 22