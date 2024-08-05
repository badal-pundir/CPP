#include<iostream>
#include<string>
using namespace std;

int main() {

    string s = "He1llo Th3is i2s b1adal";
    string s2 = "";
    // string tmp = "Hello hello";
    string numbers = "";

    int n = s.length();
    // cout<< n;

    for(int i = 0; i< n; i++) {
        if(!(s[i] <= '9' && s[i]>='0')) {
            s2+=s[i];
        }
        else{
            numbers += s[i];
        }
    }

    // cout<<s2;

    // cout<<s2[5];

    if(s2[5]==' '){
        // cout<<"space";
    }
    // cout<< s2<<endl;
    cout<< numbers<<endl;
    int k = 0; // to track the numbers.
    int i = int(numbers[k]);

    for(int j = 0; j< n; j++){
        if(s[j] == ' ') {
            cout<<"j="<<j<<endl;
            i = i - '0';
            cout<<"i="<<i<<endl;
            cout<<"s2[i-1]="<<s2[i-1]<<endl;
            s2[i-1] = s[j+1];
            i = j + numbers[k + 1];
            cout<<s2<<endl;
        }
        // else if(s[j] == '\0'){
        //     s2[i] = s[j-1];
        //     cout<<s2<<endl;
        // }
    }
    // cout<<"j="<<j<<endl;
    i = i - '0';
    cout<<"i="<<i<<endl;
    cout<<"s2[i-1]="<<s2[i-1]<<endl;
    s2[i-1] = s2[n-1];
    cout<<s2[i]<<endl;
    cout << s2;
    }

    // cout << s2;
    // cout << s2;

