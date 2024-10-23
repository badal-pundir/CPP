/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;



int main()
{
    string str = "A10:C20";
    int a, b, c, d;
    // a = str[0];
    int index = str.find(':');
    string secondNum = str.substr(index + 2);
    // cout<< second<< endl;
    d = stoi(secondNum);
    // cout<< d;
    string secondAlpha = str.substr(index + 1, 1);
    // cout<< secondAlpha;
    // char cc = char(secondAlpha);
    c = secondAlpha[0] - 'A' + 1;
    a = str[0] - 'A' + 1;
    // // c = str[ - 1];
    int alphaDiff = c - a + 1;
    // cout<< alphaDiff;
    
    string firstNum = str.substr(1, index - 1);
    b = stoi(firstNum);
    cout<< b;
    cout<< "Number of cells: "<< (c - a + 1) * (d - b + 1); 
    
    
    return 0;
}