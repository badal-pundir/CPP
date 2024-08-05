#include<bits/stdc++.h>
using namespace std;

int second_largest(vector<int> a, int n){
    int ss = -1;
    int l = a[0];

    for (int i = 1 ; i< n; i++){

        if(a[i]>l){
            ss = l;
            l = a[i];
        }else if (a[i]>ss)
        {
            ss = a[i];
        }
        
    }

    // vector<int> result;
    // cout << ss;
    // result.push_back(ss);

    return ss;

}

int main() {
    int n, element;
    vector<int> a;
    vector<int> result;
    cin >> n;

    for(int i = 0; i< n; i++) {
        cin>> element;
        a.push_back(element);
    }
    // for(int i: a)cout<<i;
    cout<< second_largest(a, n);

}