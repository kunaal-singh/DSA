#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        // Skip duplicate first elements
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({nums[i], nums[j], nums[k]});

                j++;
                k--;

                // Skip duplicate second elements
                while (j < k && nums[j] == nums[j - 1])
                    j++;

                // Skip duplicate third elements
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }

    return ans;
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

    vector<vector<int>> ans = threeSum(nums);

    if (ans.empty())
    {
        cout << "No triplets found." << endl;
    }
    else
    {
        cout << "\nTriplets whose sum is 0 are:\n";

        for (int i = 0; i < ans.size(); i++)
        {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "]" << endl;
        }
    }

    return 0;
}