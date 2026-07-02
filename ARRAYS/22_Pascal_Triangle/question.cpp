#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> result(numRows);

        for (int i = 0; i < numRows; i++) {

            // Create a row of size (i+1) and fill it with 1's
            result[i] = vector<int>(i + 1, 1);

            // Fill the middle elements
            for (int j = 1; j < i; j++) {
                result[i][j] = result[i - 1][j] + result[i - 1][j - 1];
            }
        }

        return result;
    }
};

int main() {
    int numRows;

    cout << "Enter the number of rows: ";
    cin >> numRows;

    Solution obj;

    vector<vector<int>> triangle = obj.generate(numRows);

    cout << "\nPascal's Triangle:\n\n";

    for (int i = 0; i < triangle.size(); i++) {

        // Print spaces for pyramid shape
        for (int s = 0; s < numRows - i - 1; s++) {
            cout << " ";
        }

        // Print row elements
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}