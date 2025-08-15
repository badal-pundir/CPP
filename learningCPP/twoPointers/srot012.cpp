// Sort 0, 1, 2
/* given
    1. A unsorted array with 0, 1, 2
*/
#include<bits/stdc++.h>
using namespace std;
/* Two Pointer Appraoch 
    i(0), j(1), k(2);
    itterate using j;
    for(j = 0,i = 0,k = n-1 -> n, j++)
        if arr-j == 0 -> swap with arr-i and i++,
        if arr-j == 2 -> swap with arr-k and k--,
*/
void sort_(vector<int> &arr) {
    int i = 0;
    int j = 0;
    int n = arr.size();
    int k = n - 1;

    while(j <= k) {
        if(arr[j] == 0) {
            swap(arr[i++], arr[j]);
            // while(arr[i] == 0)i++;
        }
        if(arr[j] == 2) swap(arr[j], arr[k--]);
        if(arr[j] == 1) j++;
    }
}

int main() {
    vector<int> arr = {2, 1, 0, 2, 1, 2, 0, 0, 0, 1};
    cout<<"Befor: ";
    for(auto &it: arr) cout<< it<< " ";

    sort_(arr);

    cout<<"\nAfter: ";
    for(auto &it: arr) cout<< it<< " ";
    return 0;
}