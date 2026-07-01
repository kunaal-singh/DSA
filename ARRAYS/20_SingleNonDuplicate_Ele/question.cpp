//LEETCODE 540

#include <iostream>
#include <vector>

using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;

    if(nums.size() == 1)
    {
        return nums[0];
    }

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(mid == 0 && nums[0] != nums[1])
        {
            return nums[mid];
        }

        if(mid == nums.size() - 1 && nums[nums.size() - 1] != nums[nums.size() - 2])
        {
            return nums[mid];
        }

        // Fixed condition
        if(mid > 0 && mid < nums.size() - 1 &&
           nums[mid - 1] != nums[mid] &&
           nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }

        if(mid % 2 == 0)
        {
            if(nums[mid - 1] == nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if(nums[mid - 1] == nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Single non-duplicate element is: "
         << singleNonDuplicate(nums);

    return 0;
}