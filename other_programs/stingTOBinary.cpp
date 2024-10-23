/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;


void binaryString(string str) {
    string s = str;
    if( s.size()%4!= 0) {
        cout<< "Invalid string";
        return;
    }
    
    else{
        std::vector<char> lst = {'0', '1', '2', '3', '4', '5', '6', '7', '8','9', 
        '+', '-', '*', '/'};
        // cout<< "13 -> " << lst[13]<<endl;
        for(int i = 0; i < s.size(); i=i+4) {
            string tem = s.substr(i, 4);
            // cout<< endl<<tem;
            // binary to decimal
            int decimal = stoi(tem, nullptr, 2);
            // cout<< decimal << endl;
            char p = lst[decimal];
            if( p == '+' || p == '-' || p == '*' || p == '/')
{                cout<<endl;
            cout<< p;
    cout<< endl;
}
            else {
                cout<< p;
                // cout<<endl;
            }
        }
    }
    return;
}
int main()
{
    // std::cout<<"Hello World\n";
    string str = "0110110000100001";
    // cout<< str.size();
    /*int a = 23434;
    string s = "2324";
    int b = stoi(s);
    cout<< b;*/
    binaryString(str);
    return 0;
}