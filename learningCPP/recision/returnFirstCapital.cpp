#include<bits/stdc++.h>
using namespace std;


int findFirstCapitalChar(string& str, int index = 0) {
    if((str[index] > 64 && str[index] < 91)) {
        return index;
    }
    if(str[index] == '\0') return -1;
    
    return findFirstCapitalChar(str, index + 1);
    // return index;
}
int main() {
    string str;
    getline(cin, str);
    int FirstCapitalChar = -1;
    FirstCapitalChar = findFirstCapitalChar(str); 
    cout<< FirstCapitalChar;
    return 0;
}