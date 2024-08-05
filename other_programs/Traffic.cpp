#include<bits/stdc++.h>
using namespace std;


int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.

	if(m == n) return n;

	vector<int> arr(n,-1);
	int j = 0;
	int count = 0;
	int max = 0;

	for(int i = 0; i< n; i++) {
        if(vehicle[i] == 0) {
            arr[j] = i;
			j++;
        }
    }
	j = 0;
	for(int i = 0;i< n; i++) {
		if(vehicle[i] == 0) {
			if(m > 0) {		
                // cout << "hi";	
				m--;
				vehicle[i] = 1;
				count ++;
			} else {
				vehicle[arr[j]] = 0;
				j++;
				if(max < count)	max = count;
				// count--;				
			}
		}else {
			count ++;
		}
	}

	return max;
}

int main() {
    vector<int> vechiles = {0, 1, 1};
    int n = 3;
    int m = 1;
    cout << traffic(n, m, vechiles);
}
