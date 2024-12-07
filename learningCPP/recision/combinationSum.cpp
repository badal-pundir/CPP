#include<bits/stdc++.h>
using namespace std;

void printAllComb(vector<int> arr, int st, 
    int target, vector<int> newlist, 
    vector< vector<int>> &ans
    ) {
    // base condition
    if(target == 0){
        // cout<<"[";
        // for(auto &it: newlist) cout<< it << " ";
        // cout<<"]";
        ans.push_back(newlist);
        // for(auto & it: newlist) {
        //     cout<< it;
        // }
        // cout<<endl;
        // newlist.pop_back();

        return;
    }
    // main coding
    for(int i = st; i < static_cast<int>(arr.size()); i++) {
        newlist.push_back(arr[i]);
        printAllComb(arr,i + 1,  target - arr[i], newlist, ans);
    	newlist.pop_back();
    }
}
int main() {
    vector<int> arr = {1, 1, 3, 2, 2};
    int target = 4;
    sort(arr.begin(), arr.end());
    // int newsize = 2 * 3;
    vector<vector<int>> ans;
    vector<int> newlist;
    printAllComb(arr,0, target, newlist, ans);
    for(auto& it: ans) {
            for(int i = 0 ;  i < static_cast<int>(it.size()) ; i++)
                cout<< it[i];
            cout<< endl;
        }
    return 0;
}