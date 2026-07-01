#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n; 

    vector<int> arr1(n);

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for(int i = 0; i < n; i++)
    {
        int leftsum = 0;
        int rightsum = 0;

        for(int j = i - 1; j >= 0; j--)
        {
            leftsum += arr1[j];
        }

        for(int j = i + 1; j < n; j++)
        {
            rightsum += arr1[j];
        }

        if(leftsum == rightsum)
        {
            cout << "Equilibrium index is: " << i;
            return 0;
            
        }
    }

    cout << "No equilibrium index found";

    return 0;
}