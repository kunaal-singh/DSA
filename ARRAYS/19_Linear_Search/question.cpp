#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int target)
{
   for(int i = 0; i < size; i++){
    if( arr[i] == target)
    {
        return i;
    }
   }
   return -1;
}
int main()
{
    int arr[] = { 3,24,34,2,5,6,76,6,7};
    int size = 9;
    int target = 9;

    cout << linearSearch(arr, size, target)<< endl;
    return 0;


}
