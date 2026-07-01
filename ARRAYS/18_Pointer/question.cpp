#include <iostream>
#include <vector>

using namespace std;

int main(){
    float price = 100.25;
    float* ptr = &price;

    cout << ptr << endl;
    cout << &price << endl;
};   // it prints the address of the price variable