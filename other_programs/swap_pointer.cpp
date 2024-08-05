#include<iostream>
using namespace std;


// void swap(int* to_a, int* to_b) {
//     int c = *to_a;
//     *to_a = *to_b;
//     *to_b = c;

// }


void swap(int &a, int &b) {
    
    int temp = a;
    a = b;
    b = temp;
    // cout<<temp;
    // *a = *b;
    // *b = temp;
}
int main() {
    int a = 10;
    int b = 12;

    // swap(&a, &b);
    swap(a, b);
    cout<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b;
}