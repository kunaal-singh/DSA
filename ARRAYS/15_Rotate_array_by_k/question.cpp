#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to rotate the array
void rotateArray(vector<int>& nums, int k)
{
    int n = nums.size();

    // If k is greater than n
    k = k % n;

    // Step 1: Reverse the entire array
    reverse(nums.begin(), nums.end());

    // Step 2: Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Step 3: Reverse the remaining elements
    reverse(nums.begin() + k, nums.end());
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    rotateArray(nums, k);

    cout << "Array after rotation: ";
    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}