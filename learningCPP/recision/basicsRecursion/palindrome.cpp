#include<bits/stdc++.h>
using namespace std;

int callRecusion(int &num, int &revNum) {
    if(num == 0) {
        return revNum;
    }
    revNum = revNum * 10 + num % 10;
    num /= 10;
    callRecusion(num, revNum);
    return revNum;
}
int main() {
    int num;
    cin >> num;
    int revNum = 0;
    int reverse = callRecusion(num, revNum);
    cout<< reverse;
    if(reverse == num){
        cout<< " Number is palindrome";
    }
    else cout<< " Number is not a palindrome";
    return 0;
}