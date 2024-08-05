
#include <iostream>
#include <vector>
using namespace std;


int countDigits(int n){
	// Write your code here.	
	int rem = n % 10;
	int tem = n;
	int count = 0;

	while(tem > 0){
		rem = tem % 10;

		if((rem>0) & (n%rem == 0)){
			count += 1;
		}
		tem = tem/10;
        


	}
	return count;
}

int main(){
    int n;
    cin >> n;
    cout << countDigits(n);
}