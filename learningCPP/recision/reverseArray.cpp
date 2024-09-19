//  reverse an array
#include<iostream>
#include<array>
using namespace std;

// swap function
void swap(int &frontElement, int &backElement){
    int tem = frontElement;
    frontElement = backElement;
    backElement = tem;
}

// void reverseArray(array<int, 4> arr){
void reverseArray(int arr[],int size, int i){
    if(size < 2) return;
    if(i == size/2) {
        return;
    }
    swap(arr[i], arr[size - i - 1]);
    reverseArray(arr, size, i + 1);
}
int main() {
    int n = 4;
    int arr[n] = {1, 2, 4, 5};
    // array<int, n> arr = {1, 2, 3, 5};
    reverseArray(arr, n, 0);
    for(int i: arr) cout<< i<<" ";

    return 0;
}