#include<iostream>
#include<string>
// #include<cctype>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string temS = "";
    cin>> s;
    int len = s.length();
    cout<<len<<endl;
    cout<<isdigit(s[1]);
    for (int i = 0; i<len; i++) {
        if(isalpha(s[i]|| isdigit(s[i]))){

            //if (isupper(str[i])) {
            // str[i] = tolower(str[i]);
            if(s[i] <= 91 && s[i] >= 65){
                s[i] = s[i] - 'A' + 'a';
            }
            temS += s[i];
        }
    }
    cout<<temS<<endl;
    int st = 0;
    int size = temS.length();
    int e = size - 1;

    if(size == 1 || temS == ""){
        cout<< "True"; // string is palindrome
        return 0;
    }

    while (st<e)
    {
        if(temS[st]!=temS[e]){
            cout<< "False at "<< temS[st]; // string is not palindrome
            return 0;
        }
        st++;
        e--;
    }
    cout<< "True";
    
    // cout<< temS;
return 0;
}