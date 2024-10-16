// print all subset sum
/*
input: [1, 2, 3]
output: 0, 1, 2, 3, 3, 4, 5, 6
exp: 0 -> when no element selected
     1 -> when 1 is selected
     2 -> when 2 is selected
     3 -> when 3 is selected
     3 -> when 1 and 2 are selected
     4 -> when 1 and 3 are selected
     5 -> when 2 and 3 are selected
     6 -> when 1, 2 and 3 all are selected
*/
#include<bits/stdc++.h>
using namespace std;

void sumSubset(vector<int> arr, int index, int sum, vector<int>& ans) {
    if(index == static_cast<int>(arr.size())) {
        ans.push_back(sum);
        return;
    }

    for(int i = index ; i < static_cast<int>(arr.size()); i++) {
        sumSubset(arr, i + 1, sum + arr[i], ans);
        sumSubset(arr, i + 1, sum, ans);
        return;        
    }
    return;
}

int main() { 
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    sumSubset(arr, 0, 0, ans);
    // sort(ans.begin(), ans.end());
    for(auto& it: ans) {
        cout<< it <<" ";
    }

    return 0;
}