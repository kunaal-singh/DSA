#include <iostream>
#include <vector>

using namespace std;

// Function to check if the array is sorted and rotated
bool check(vector<int>& nums)
{
    int count = 0;
    int n = nums.size();

    // Count the number of decreasing points
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }

    // Check the last and first element
    if (nums[n - 1] > nums[0])
    {
        count++;
    }

    // If there is at most one decreasing point, return 
    return count <= 1;
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

    bool ans = check(nums);

    if (ans)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}