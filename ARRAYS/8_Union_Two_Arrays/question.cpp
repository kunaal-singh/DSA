#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {

        int n = a.size();
        int m = b.size();

        vector<int> uni;

        int i = 0, j = 0;

        while(i < n && j < m)
        {
            while(i > 0 && i < n && a[i] == a[i - 1])
                i++;

            while(j > 0 && j < m && b[j] == b[j - 1])
                j++;

            if(i >= n || j >= m)
                break;

            if(a[i] < b[j])
            {
                uni.push_back(a[i]);
                i++;
            }
            else if(a[i] == b[j])
            {
                uni.push_back(a[i]);
                i++;
                j++;
            }
            else
            {
                uni.push_back(b[j]);
                j++;
            }
        }

        while(i < n)
        {
            if(i == 0 || a[i] != a[i - 1])
                uni.push_back(a[i]);
            i++;
        }

        while(j < m)
        {
            if(j == 0 || b[j] != b[j - 1])
                uni.push_back(b[j]);
            j++;
        }

        return uni;
    }
};

int main()
{
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    vector<int> b(m);

    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    Solution obj;

    vector<int> ans = obj.findUnion(a, b);

    cout << "Union of arrays: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}