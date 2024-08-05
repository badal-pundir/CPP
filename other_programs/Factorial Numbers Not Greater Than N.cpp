#include<bits/stdc++.h>
using namespace std;

long long HelperFactorial(int i){
    if(i == 1)
        return 1;
    return i * HelperFactorial(i-1);
    
}

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> result;
    if(n == 1){
        result.push_back(1);
        return result;
    }
    int i = 1;
    for( ; i<=n; i++){
        long long fact = HelperFactorial(i);
        if(fact>n){
            return result;
        }
        result.push_back(fact);
    }
}
int main(){
    long long n;
    cin >> n;
    cout<< factorialNumbers(n);
    return 0;
}