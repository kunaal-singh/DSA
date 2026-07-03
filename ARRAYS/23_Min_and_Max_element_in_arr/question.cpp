#include <iostream>
#include <vector>
using namespace std;

vector<int> getMinMax(vector<int> &arr)        //Time Complexity : O(n)
{
    int mini = arr[0];
    int maxi = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < mini)
            mini = arr[i];

        if (arr[i] > maxi)
            maxi = arr[i];
    }

    return {mini, maxi};
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = getMinMax(arr);

    cout << "Minimum element = " << ans[0] << endl;
    cout << "Maximum element = " << ans[1] << endl;

    return 0;
}