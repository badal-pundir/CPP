#include<iostream>
using namespace std;

long long sum = 0;
long long sumOfCube(long long n) {
    if(n == 0) {
        return sum;
    }
    sum += (n*n*n);
    sumOfCube(n-1);
    return sum;
}
int main() {
    long long n = 7;
    cout<<sumOfCube(n);
}