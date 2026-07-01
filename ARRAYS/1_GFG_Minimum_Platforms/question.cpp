#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minPlatform(vector<int>& arr, vector<int>& dep)
{
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int n = arr.size();

    int i =0;
    int j =0;

    int cut =0;
    int maxCut =0;

    while(i<n && j<n)
    {
        if(arr[i]<= dep[j])
        {
            cut = cut+1;
            maxCut = max(maxCut, cut);
            i =i+1;
        }
        else{
            cut = cut -1;
            j = j+1;
        }
    }
    return maxCut;
}
int main()
{
    int n;

    cout<<"Enter the number of trains:";
    cin>>n;

    vector<int> arr(n);
    vector<int> dep(n);

    cout << "Enter arrival times:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter departure times:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> dep[i];
    }
   int ans = minPlatform(arr,dep);

   cout << "Minimum Platforms Required = " << ans << endl;

   return 0;
}