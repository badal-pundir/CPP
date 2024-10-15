#include<bits/stdc++.h>
using namespace std;

int calculateLength(string& str, int i) {
    if(str[i] == '\0') {
        return 0;
    }
    return 1 + calculateLength(str, i + 1);
     
}
int main() {
    string str;
    getline(cin, str);
    // int count = 0;
    int length = calculateLength(str, 0);
    cout<< length;
    return 0;
}