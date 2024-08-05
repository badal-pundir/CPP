#include<bits/stdc++.h>
using namespace std;

int i = 0;

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    if (i >= n/2){
        return nums;
    }
    // cout << i <<" ";
   
    
    swap(nums[i], nums[n-i-1]);
    i++;
    reverseArray(n, nums);

}

int main(){
    int n = 8;
    vector<int> nums{11, 6, 2, 4, 7, 1, 1, 3};
    // cin >> n;
    reverseArray(n, nums);
    cout<<endl;
    for (int i= 0; i< n; i++){
        cout<< nums[i]<<" ";
    }
    return 0;
}