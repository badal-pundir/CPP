#include<bits\stdc++.h>
using namespace std;

class Seive{
    public:
        void seive(int n, vector<bool>& primes){
            for(int i = 2; i * i <= n; i++){
                if(!primes[i]){
                    for(int j = i*2; j <= n; j += i){
                        primes[j] = true;
                    }
                }
            }

            for(int i = 2; i <= n; i++){
                if(!primes[i]){
                    cout<< i << " ";
                }
            }
        }
};

int main() {
    int n = 37;
    vector<bool> primes(n+1, false); // Sc:O(N)
    // primes[4] = true;
    // cout<< primes[4];
    Seive ob;
    ob.seive(n, primes);
    
}