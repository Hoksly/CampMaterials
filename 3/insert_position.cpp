#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();

        int right, left, mid;
        right = nums.size();
        left = 0;

        while (right - left > 1)
        {
            mid = (right + left) / 2;

            if (nums[mid] >= target)
                right = mid;
            else
                left = mid;
        }
        if (nums[left] >= target)
            return left;

        return right;
    }
};

int main()
{
    int mas[] = {1, 3, 5, 6};

    int target, n = 4;

    cout << "Target: " << endl;
    cin >> target;

    int left = 0, right = n, mid;
}
