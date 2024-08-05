#include<bits\stdc++.h>
using namespace std;

class Solution{
    public:
    void frequencyCount(vector<int>& arr, int N, int P){
    // code here
        vector<int> hashh(P,0);
        
        for(int i = 0; i<N; i++) {
            hashh[arr[i]]++;
        }
        arr.assign(N,0);

        for(int i=1; i<=N; i++){
            arr[i-1] = hashh[i];
        }
    }
};
int main() {
    vector<int> arr ({4, 5, 6, 7, 8});
    int N = 5;
    int P = 1000;
    Solution ob;
    ob.frequencyCount(arr, N, P);
    
    for(int i = 0; i<N; i++){
        cout<< arr[i]<< " ";
    cout<< endl;
    }
    return 0;
}