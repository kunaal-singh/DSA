#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int getMaxSum(int mat[][3],int row, int col)
{
    int maxSum = INT_MIN;
    for(int i =0; i<row; i++)
    {
        int rowSum=0;
        for(int j =0; j<col; j++)
        {
            rowSum += mat[i][j];
        }

        maxSum = max(maxSum,rowSum);
    }
    return maxSum;
}

int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row =3;
    int col =3;

    cout<<getMaxSum(mat,row,col)<<endl;
    return 0;

}