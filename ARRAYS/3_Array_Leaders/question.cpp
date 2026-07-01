#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> leaders(vector<int>& arr)
{
    vector<int> ans;
    int maximum = INT_MIN;
    int n = arr.size();

    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] >= maximum)
        {
            ans.push_back(arr[i]);
        }

        maximum = max(maximum, arr[i]);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = leaders(arr);

    cout << "Leaders are: ";
    for(int x : result)
    {
        cout << x << " ";
    }

    return 0;
}