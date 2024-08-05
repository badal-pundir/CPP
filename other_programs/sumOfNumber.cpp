#include<bits/stdc++.h>

using namespace std;
long long sum = 0;
long long sumFirstN(long long n) {
    // Write your code here.
    // 1st method - direct formula
    long long result = (n*(n+1))/2;
    return result ;

    // 2nd method
    // long long sum = 0;
    // sumHelper(n,sum);
//     if(n == 1){
//         return 1;
//     }
//     else {
      
//       sum += sumFirstN(n - 1);
//       cout<< sum << endl;
      
//     }
//     return sum;
// 
}

int main(){
    long long n;
    cin >> n;
    cout << sumFirstN(n);
    return 0;
}