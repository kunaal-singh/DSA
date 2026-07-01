#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist)
{
    int cows = 1;              // First cow placed at first stall
    int lastStallPos = arr[0];

    for(int i = 1; i < N; i++)
    {
        if(arr[i] - lastStallPos >= minAllowedDist)
        {
            cows++;
            lastStallPos = arr[i];

            if(cows == C)
            {
                return true;
            }
        }
    }

    return false;
}

int getDistance(vector<int> arr, int N, int C)
{
    sort(arr.begin(), arr.end());

    int st = 1;
    int end = arr[N - 1] - arr[0];
    int ans = 0;

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(isPossible(arr, N, C, mid))
        {
            ans = mid;      // Store possible answer
            st = mid + 1;   // Try for larger distance
        }
        else
        {
            end = mid - 1;  // Reduce distance
        }
    }

    return ans;
}

int main()
{
    int N, C;

    cout << "Enter number of stalls: ";
    cin >> N;

    vector<int> arr(N);

    cout << "Enter stall positions: ";
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of cows: ";
    cin >> C;

    cout << "Maximum minimum distance = "
         << getDistance(arr, N, C) << endl;

    return 0;
}