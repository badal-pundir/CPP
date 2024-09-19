#include<iostream>
#include<vector>
using namespace std;
/*
arr = [3, 1, 2]
subsequences -> a contigous sequence which follows the order
[], [3], [1], [2], [3, 1], [1, 2], [3, 2], [3, 1, 2]
total 8 subsequences
*/

void printSub(int ind, vector<int>& ds, int arr[], int n) {
    if(ind == n) {
        cout<<"[";
        for(auto it: ds) {
            cout<< it<<",";
        }
        cout<<"]";
        cout<< endl;    
        return;
    }
    // take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    printSub(ind + 1, ds, arr, n);
    // droping the last picked element
    //not pick, or not take condition, this element is not added to your subsequence
    ds.pop_back();
    printSub(ind + 1, ds, arr, n);
}
// TC-> O(2^n * n)
int main() {
    int arr[] = {3, 1, 2, 0};
    int n = 4;
    vector<int> ds;
    printSub(0, ds, arr, n);
    return 0;
}