#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int add_ = 54321;
    int tem = 0;

    for(int i = n - 1; i>= 0; i--) {
        arr[i] += tem;
        if(add_ > 10){
            tem = arr[i] + add_%10;
            arr[i] = tem % 10;
            add_ /= 10;
        }
        else if(add_ < 10 && add_ > 0) {
            tem = arr[i] + add_%10;
            arr[i] = tem % 10;
            add_ = 0;
        }        
        tem /= 10;
    }

    for(int it: arr){
        cout<< it<<" ";
    }
}