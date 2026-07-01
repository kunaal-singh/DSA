#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {1,2,3,4,5};

    bool equal= true;

    if(arr1.size() != arr2.size())
    {
        equal = false;
    }
    else{
        for(int i = 0; i < arr1.size(); i++)
        {
            if(arr1[i] != arr2[i])
            {
                equal = false;
                break;
            }
        }
    }

    if(equal)
    cout<<"both arrays are equal";
    else
    cout << "both arrays are not equal";

    return 0;
}
   
