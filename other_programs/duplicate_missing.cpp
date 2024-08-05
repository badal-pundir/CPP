#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3 ,4, 5 ,6 , 7, 3};
    int n = arr.size();

    // int extra[n] = {0};

//     for(int i = 0; i< n; i++) {
//         if(i+1 == arr[i]){
//             extra[arr[i]-1] = 1;
//             continue;
//         }
//         else {
//             extra[arr[i]-1] += 1;
//         }
//     }

// // for( auto i: extra) cout<< i<<endl;
//     for( int i = 0; i< n ; i++){
//         if(extra[i]==0) 
//             cout<<"missing term "<<i+1<<endl;
//         else if(extra[i]>1)
//             cout<<"duplicate term " << i+1<<endl;
//     }

//  second method
    int count = 0;

    
    for(int i = 0; i< n; i++){
        if(count){
            cout<<"break";
            break;
        }
        if( i == 0){ 
            if(arr[i] > arr[i+1]){
            // arr[arr[i-1]]+=1;
            arr[i] = i+1;
            cout<<"missing term "<<i+1<<endl;
            cout<<"duplicate term " <<arr[arr[i-1]]<<endl;
            count ++;
            }
        } else{
        if(arr[i] < arr[i-1] || arr[i] > arr[i-1] +1) {
            // arr[arr[i-1]]+=1;
            
            cout<<"missing term "<<i+1<<endl;
            cout<<"duplicate term " <<arr[arr[i-1]]<<endl;
            arr[i] = i+1;
            count += 1;
        }
        }
    }

    for( auto i: arr) cout<< i<<endl;
}