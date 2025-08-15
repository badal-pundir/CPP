// tow elements in the array that gives sum k.
/* given
    1 sum k
    2 all positive sumbers
*/
#include<bits/stdc++.h>
#include<string>
using namespace std;

/* method 1 using hash 
string read(int n, vector<int> book, int target) {
    unordered_map<int, int> map;
    for(int i = 0; i < book.size(); i++) {
        int val = book[i];
        int rem = abs(target - val);
        if(map.find(rem) != map.end()) {
            return "True";
        }
        map[val] = rem;
    }
    return "False";
}
*/
/* method 2 two pointer and sorting
*/

string read(int n, vector<int> book, int target) { 
    sort(book.begin(), book.end());
    int i = 0, j = book.size() - 1;

    while( i < j) {
        int sum = book[i] + book[j]; 
        if( sum = target) {
            return "True";
        } else if( sum > target) {
            j--;
        } else {
            i ++;
        }
    }
    return "False";
}
int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 16;
    int n = arr.size();
    string ans = read(n, arr, target);
    cout<<"Ans: "<< ans;
    return 0;
}