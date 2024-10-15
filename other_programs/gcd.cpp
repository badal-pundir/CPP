#include<bits\stdc++.h>
using namespace std;

class gcd
{
private:
    /* val */
public:
    int find_gcd(int a, int b) {
        
    if(a == 0) {
        return  b;
    }
    return find_gcd(b%a, a);

    }
    ~gcd();
};

// gcd::gcd(int a, int b)
// {
//     if(a == 0) {
//         return  b;
//     }
//     return gcd(b%a, a);
// }

gcd::~gcd()
{
    cout<<"\nprogram ended.";
}

int main() {
    // int a = 5;
    // int b = 6;
    gcd ob;
    cout<< ob.find_gcd(36 ,18);
}