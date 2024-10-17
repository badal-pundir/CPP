#include<bits/stdc++.h>
using namespace std;


int getMax(vector<int>& arr, int ind, int& max) {
    if(ind == static_cast<int>(arr.size())) {
        return max;
    }
    if(arr[ind]  max) {
        max = arr[ind];
    }
    getMax(arr, ind + 1, max);
    return max;
}
int main() {
    vector<int> arr = {1, 2, -3, 5, -22232};
    int max_ = INT_MIN;
    int max = getMax(arr, 0, max_);
    cout<<max;
    return 0;
}