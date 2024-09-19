#include<iostream>
using namespace std;

int fab(int n) {
    /* 
    if n == 0 return 0
    if n == 1 return 1
    */
    if(n <= 1) return n;
    // return last + secondLast
    return fab(n - 1) + fab(n - 2); // TC ~ O(2^n)
}
int main() {
    cout<< fab(4);
    return 0;
}