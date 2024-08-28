#include<bits/stdc++.h>
using namespace std;

int main() {
    int  n;
    int sum = 0;
    cin>>n;
    int tem = n;
    for(int i = 5; i>=1; i--) {
        sum += tem/i;
        tem = tem % i;
    }
    return sum;
}