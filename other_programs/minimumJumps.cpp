#include<iostream>
#include<vector>
using namespace std;

class minimumJumps
{
private:
    /* val */
public:
    minimumJumps(/* args */);
    int minJumps(int arr[], int n) {
      
        int i = 0;
        int sum = 0;
        int jumps = 0;
        while (sum <= n - 1){
            if(arr[i] == 0){
                return -1;
            }
            
            sum += arr[i];
            jumps++;
            if(sum > n-1) break;
            i += arr[i];
        }
        return jumps;
    } 
    ~minimumJumps();
};

minimumJumps::minimumJumps(/* args */)
{
}

minimumJumps::~minimumJumps()
{
}

int main() {
    int n = 5;
    int arr[] = {1, 1, 1, 1, 1};

    // cin>> n;
    // for(int i = 0; i< n; i++){
    //     cin>>arr[i];
    // }
    minimumJumps ob;
    
    cout<<ob.minJumps(arr, n) <<endl;

    return 0;

}