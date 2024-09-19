#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left ++;
        }
        else{
            temp.push_back(arr[right]);
            right ++;
        }
    }
    while (left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high) {
        temp.push_back(arr[right]);
        right++;
    }
    
    for(int i = low; i<=high; i++) {
        arr[i] = temp[i - low];
    }
    

}
void mergeSort(vector<int>& arr, int left, int right) {
    if(left >= right) return;
    int middle = (left + right)/2;
    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);
    merge(arr, left, middle, right);
    return;
}
// TC -> O(n*logn)
// SC -> O(n)
int main() {
    vector<int> arr = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    // int arr[] = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    int n = 9;

    mergeSort(arr, 0, n - 1);
    for(auto &it: arr) {
        cout<< it<< " ";
    }
    return 0;
}