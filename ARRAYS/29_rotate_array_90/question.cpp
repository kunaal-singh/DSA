#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    int a[100][100];
    int b[100][100];

    // Input
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Rotate 90 degrees clockwise
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            b[j][n - 1 - i] = a[i][j];
        }
    }

    cout << "Rotated matrix will be:\n";

    // Print
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}