#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> ans;

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0, j = 0;
    int n = nums1.size(), m = nums2.size();

    while (i < n && j < m)
    {
        if (nums1[i] == nums2[j])
        {
            if (ans.size() >= 1 && ans.back() != nums1[i])
            {
                ans.push_back(nums1[i]);
            }
            else if (ans.size() == 0)
            {
                ans.push_back(nums1[i]);
            }

            i++;
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}

int main()
{
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> nums1(n);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    vector<int> nums2(m);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> nums2[i];
    }

    vector<int> result = intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}