/**
 * 1-Print name 5 times
 * 2-Print linearly from 1 to N
 * 3-Print from N to 1
 * 4-Print linearly from 1 to N (but by back brack)
 * 5-Print from N to 1 ( by back track)
 */

#include<bits/stdc++.h>
using namespace std;


// 1 Print name 5 times ********************************************
/*
void printName(int n) {
    if(n == 0) return;
    cout<<"Badal "; 
    printName(--n);
}
*/

// 2-Print linearly from 1 to N ************************************
/*
void print1toN(int x, int n) {
    if(x > n) return;
    cout<< x << " ";
    print1toN(++x, n);
}
*/

// 3-Print from N to 1 *********************************************
/*
void printNto1(int n, int x) {
    if(n < x) return;
    cout<< n << " ";
    printNto1(--n, x);
}
*/

// 4-Print linearly from 1 to N (but by back brack)*****************
// without using '+'
// we can use '-'

/*
void print1toN(int x, int n) {
    if(x < 1) return;
    print1toN(x-1, n);  // don't do --x it will change the value of x 
                        // but with x-1 is not changing the value of x
                        // we are just passing one less than value of x;
    cout<< x << " ";
}
*/

// 5-Print from N to 1 ( by back track)*****************************
// without using '-' operator
void printNto1(int x, int n) {
    if(x > n) return;
    printNto1(x + 1, n);
    cout<< x << " ";
}
main() {
    int n;
    cin>> n;
    // printName(n);
    // print1toN(1, n);
    // printNto1(n, 1);
    // print1toN(n, n);
    printNto1(1, n);

}