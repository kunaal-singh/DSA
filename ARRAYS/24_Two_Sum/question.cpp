#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int needed = target - nums[i];

        if (mp.find(needed) != mp.end())
        {
            return {mp[needed], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> ans = twoSum(nums, target);

    if (ans.empty())
    {
        cout << "No valid pair found." << endl;
    }
    else
    {
        cout << "Indices are: " << ans[0] << " " << ans[1] << endl;
        cout << "Values are: " << nums[ans[0]] << " " << nums[ans[1]] << endl;
    }

    return 0;
}