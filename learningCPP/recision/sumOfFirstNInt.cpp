#include<bits/stdc++.h>
using namespace std;

int computeSum(int i, int sum) {
    if(i == 0) return sum;
    return computeSum(i - 1, sum + i);
}
int findSum(int n) {
    if(n == 0) return 0;
    return n + findSum(n - 1);
}
int main() {
    int n;
    cin>> n;
    int sum = 0;
    // sum = computeSum(n, sum);
    sum = findSum(n);
    cout<<"Sum of first "<< n << " integers is: "<< sum;
    return 0;

}