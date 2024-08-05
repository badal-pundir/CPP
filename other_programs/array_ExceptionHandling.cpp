#include<iostream>
#include <stdexcept>
using namespace std;

int main() {
    int n  = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int index;
    cin>> index;

    try {
        if(index >= n) {
            throw out_of_range("Array index out of bounds");
        }
        // cout<<"Enter num:";
        //     cin>> index;
        cout<< arr[index];
    }
    catch(const out_of_range& e) {
        cout<<"ERROR:"<< e.whata();
    }
    return 0;
} 