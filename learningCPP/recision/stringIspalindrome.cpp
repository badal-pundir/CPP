#include<iostream>
#include<string.h>
using namespace std;

// void swap(char &front, char &back) {
//     char tem = front;
//     front = back;
//     back = tem;
// }
bool checkForPalindrome(string &s, int size, int i) {
    if(size == 0) {
        cout<< "string is null\n";
        return false;
    }
    if(s[i] != s[size - i - 1]) {
        return false;
    }
    if(i == size/2) {
        return true;
    }
    // // my way
    // if(checkForPalindrome(s, size, i + 1)) return true;
    // else return false;
    // striver way
    return checkForPalindrome(s, size, i + 1);
}
int main() {

    string s= "madam";
    int n = s.size();
    if(checkForPalindrome(s, n, 0)) {
        cout<< s<< " is palindrome string";
    }
    else {
        cout<< s << " is not a palindrome string";
    }
    return 0;

}