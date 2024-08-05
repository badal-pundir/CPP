#include<iostream>
using namespace std;

template <typename T> T maximum( T a, T b);

int main() {
    cout<<maximum(2, 4)<< endl;
    cout<< maximum(3.4, 5.4)<< endl;
    cout<< maximum("badal", "pundir")<< endl;
    return 0;
}

template <typename T> T maximum(T a, T b) {
    return (a > b)? a: b;
}
