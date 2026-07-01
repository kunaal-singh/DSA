#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector<int> arr1 = {-1,2,4,-3,6,-8};
vector<int> res1;
vector<int> res2;

vector<int> merged;

for(int val : arr1)
{
    if(val <= 0)
    {
      res1.push_back(val);
    }

    if(val > 0)
    {
        res2.push_back(val);
    }
}
 for(int n : res1)
 {
    merged.push_back(n);
 }
 for(int n : res2)
 {
    merged.push_back(n);
 }
 for(int n : merged)
 {
    cout << n << " ";
 }
 return 0;
};