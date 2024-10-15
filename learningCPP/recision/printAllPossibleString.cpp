// Print all possible strings of length k that can be formed from a set of n characters
#include<bits/stdc++.h>
using namespace std;

void printAllKlengthRec(char set[], string prefix, int n, int k) {
    if(k == 0) {
        cout<< prefix<< endl;
        return;
    }

    for(int i = 0; i < n; i++) {
        string newPrefix;
        newPrefix = prefix + set[i];
        printAllKlengthRec(set, newPrefix, n, k-1);
    }
}

int main() {
    char set[] = {'a', 'b', 'c'};
    int n = 3; // size of the array or number of character
    int k = 3; // length of each string
    printAllKlengthRec(set, "", n, k);
    return 0;
}