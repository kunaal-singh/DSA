#include <bits/stdc++.h> //Chocolate problem
using namespace std;

class Solution {
public:
    int findMinDiff(vector<int>& arr, int m) {
        int n = arr.size();

        if (m == 0 || n == 0)
            return 0;

        if (m > n)
            return -1;

        sort(arr.begin(), arr.end());

        int ans = INT_MAX;

        for (int i = 0; i <= n - m; i++) {
            ans = min(ans, arr[i + m - 1] - arr[i]);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;

    cout << obj.findMinDiff(arr, m);

    return 0; //returns result
}