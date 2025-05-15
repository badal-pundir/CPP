// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool prime(int num) {
    for(int i = 2; i<=num/2; i++) {
        if(num % i == 0) return false;
    }
    return true;
}
int main() {
    int m, n;
    cin>> m;
    cin>> n;
    int s, l;
    if(m < n) {
        s = m;
        l = n;
    }else {
        s = n;
        l = m;
    }
   
    
    int count = 0;
    int a, b;
    cout<< s << " "<< l<< "\n";
    for(int i = 2; i < 100000; i++) {
        if(prime(i)) {
            count++;
            if(count == s) a = i;
            if(count == l) {
                b = i;
                break;
            }
        }
    
    }
    cout<< a<< " " << b<<"\n";
    cout<< a * b - 1;
    return 0;
    
}