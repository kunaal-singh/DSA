#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& A)
{
    int n = A.size();

    // Step 1: Find the pivot
    int piv = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            piv = i;
            break;
        }
    }

    // If no pivot exists, reverse the entire array
    if (piv == -1)
    {
        reverse(A.begin(), A.end());
        return;
    }

    // Step 2: Find the rightmost element greater than pivot
    for (int i = n - 1; i > piv; i--)
    {
        if (A[i] > A[piv])
        {
            swap(A[i], A[piv]);
            break;
        }
    }

    // Step 3: Reverse the suffix
    reverse(A.begin() + piv + 1, A.end());
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> A(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    nextPermutation(A);

    cout << "Next Permutation: ";
    for (int x : A)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}