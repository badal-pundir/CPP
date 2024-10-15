#include<bits/stdc++.h>
using namespace std;

void printAllComb(vector<int> arr, int st,  int r, vector<int> newlist) {
    // base condition
    if(r == 0){
        cout<<"[";
        for(auto &it: newlist) cout<< it << " ";
        cout<<"]";
        cout<<endl;
        // newlist.pop_back();

        return;
    }
    // main coding
    for(int i = st; i < static_cast<int>(arr.size()); i++) {
        newlist.push_back(arr[i]);
        printAllComb(arr,i + 1,  r - 1, newlist);
    	newlist.pop_back();
    }
}
int main() {
    vector<int> arr = {1, 2, 3};
    int r = 2;
    // int newsize = 2 * 3;
    vector<int> newlist;
    printAllComb(arr,0, r, newlist);
    return 0;
}