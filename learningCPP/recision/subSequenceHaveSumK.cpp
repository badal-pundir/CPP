#include<iostream>
#include<vector>
using namespace std;
/*
arr = [1, 2, 1]
output ->
[1, 1], [2]
*/
void subSeq(int ind, int arr[], int n, vector<int> &ds, int sum, int k) {
    if(ind == n) {
        if(sum == k) {
            cout<<"[";
            for(auto it: ds) {
                cout<<it<< ",";
            }
            cout<<"]";
        }
        return;
    }
    ds.push_back(arr[ind]);
    subSeq(ind + 1, arr, n, ds, sum + arr[ind], k);
    ds.pop_back();
    subSeq(ind + 1, arr, n, ds, sum, k);
}
int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    vector<int> ds;
    // find all the subsequences with sum 2;
    subSeq(0, arr, n, ds, 0, 3);
    return 0;
}