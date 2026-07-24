#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    // Function to perform Binary Search on a specific row
    bool searchInRow(vector<vector<int>> &matrix, int target, int row)
    {
        int start = 0;
        int end = matrix[0].size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (matrix[row][mid] == target)
            {
                return true;
            }
            else if (matrix[row][mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        int startRow = 0;
        int endRow = m - 1;

        while (startRow <= endRow)
        {
            int midRow = startRow + (endRow - startRow) / 2;

            // Target lies in this row
            if (target >= matrix[midRow][0] &&
                target <= matrix[midRow][n - 1])
            {
                return searchInRow(matrix, target, midRow);
            }
            // Search in lower rows
            else if (target > matrix[midRow][n - 1])
            {
                startRow = midRow + 1;
            }
            // Search in upper rows
            else
            {
                endRow = midRow - 1;
            }
        }

        return false;
    }
};

int main()
{
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    Solution obj;

    if (obj.searchMatrix(matrix, target))
    {
        cout << "Target Found" << endl;
    }
    else
    {
        cout << "Target Not Found" << endl;
    }

    return 0;
}