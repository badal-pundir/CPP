#include<iostream>
#include<vector>
using namespace std;
/*
input arr = [1, 2, 1]
output = 2
[1, 1] and [2]
*/
int subSeq(int ind, int arr[], int n, int sum, int k) {
    if(ind == n) {
        if(sum == k) return 1;
        else return 0;
    }
    int l = subSeq(ind + 1, arr, n, sum + arr[ind], k);
    int r = subSeq(ind + 1, arr, n, sum, k);
    return l + r;
}
int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    // find all the subsequences with sum 2;
    cout<< subSeq(0, arr, n, 0, 9);
    return 0;
}