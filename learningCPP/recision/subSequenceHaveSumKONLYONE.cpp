#include<iostream>
#include<vector>
using namespace std;
/*
arr = [1, 2, 1]
output ->
print [1, 1] OR [2] not both.
*/
bool subSeq(int ind, int arr[], int n, vector<int> &ds, int sum, int k) {
    if(ind == n) {
        if(sum == k) {
            cout<<"[";
            for(auto it: ds) {
                cout<<it<< ",";
            }
            cout<<"]";
            return true;
        }
        else return false;
    }
    ds.push_back(arr[ind]);
    if(subSeq(ind + 1, arr, n, ds, sum + arr[ind], k) == true) return true;
    ds.pop_back();
    if(subSeq(ind + 1, arr, n, ds, sum, k) == true) return true;
    return false;
}
int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    vector<int> ds;
    // find all the subsequences with sum 2;
    subSeq(0, arr, n, ds, 0, 2);
    return 0;
}