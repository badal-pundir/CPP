#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool comp(int a, int b) {
    return a<b;
}
int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6};
    cout<< max({1, 3, 34,4 , 45}, comp);
}
    
