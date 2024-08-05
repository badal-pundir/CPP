#include <bits\stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int X = x;
        long result = 0;
        int digit;
        int int_min = INT_MIN;
        int int_max = INT_MAX;
        

        while(X){
            digit = X%10;
            result = result*10 + digit;
            X /= 10;
            if((result > int_max) || (result < int_min)){
                return 0;
            }
        }

        return result; 
    }
};

int main()
{
    signed int x = -123;
    Solution ob;
    cout << ob.reverse(x);
    return 0;
}
