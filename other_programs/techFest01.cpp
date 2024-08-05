#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[5];
int minSum = 0;
int maxSum = 0;


for(int i = 0;i<5; i++){
    cin>> arr[i];
}


sort(arr,arr+5);


for(int i =0;i< 4;i++) {
    minSum+=arr[i];

}

for(int i = 1 ;i<5; i++){
    maxSum+=arr[i];
}

cout<<minSum<< " ";
cout<<maxSum;
}