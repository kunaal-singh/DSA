#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if(nums.size() == 0) {
        cout << 0;
        return 0;
    }

    int i = 0;

    for(int j = 1; j < nums.size(); j++) {
        if(nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    cout << "\nNumber of unique elements: " << i + 1 << endl;

    cout << "Array after removing duplicates: ";
    for(int k = 0; k <= i; k++) {
        cout << nums[k] << " ";
    }

    return 0;
}