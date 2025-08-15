// longest sub-array of sum k.
/* given
    - 1 sum k.
    - array will contains only positve elemets.
*/
/* approach
    - two pointers
*/
#include<bits/stdc++.h>
using namespace std;


int longestSubArraySumK(vector<int> arr, int sum) {
    int max_len = 0;
    int tem_sum = arr[0];
    int i = 0, j = 0;
    int size = arr.size();
    while(j < size) {
        while(tem_sum > sum && i < j) {
            tem_sum -= arr[i];
            i++;
        }
        if(tem_sum == sum) {
            max_len = max(max_len, j - i + 1);
        }
        j++;
        if( j < size) tem_sum += arr[j];
    }
    return max_len;
}
int main() {
    int i = 0, j = 0;
    vector<int> arr = {1, 1, 3, 2, 2};
    int sum = 8;

    cout<<"Ans: " << longestSubArraySumK(arr, sum);
    return 0;
}
