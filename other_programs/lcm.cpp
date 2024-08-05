#include<iostream>
using namespace std;

class lcm
{
private:
    /* data */
    int hcf;
    int a, b;
    
public:
    // constructor
    lcm(int a, int b);

    gcd(int a, int b) {
    if(a == 0)
        return b;
    gcd(b%a, a);
    
    }


    find_lcm(int a, int b, int hcf) {
        return ((a * b)/hcf);
    }
    ~lcm();
};

lcm::lcm(int A, int B) : a(A), b(B)
{
    // this ->a = A;
    // this ->b = B;
    cout<< "a is "<< a<< endl;
    cout<< "b is " << b<<endl;
    cout<<"program started\n";
}

lcm::~lcm()
{
    cout<< "\nprogram ended\n";
}


int main() {
    int A = 12;
    int B = 20;
    lcm ob( A, B );
    int hcf = ob.gcd(A, B);
    int lcm = ob.find_lcm(A, B, hcf);
    cout<<"hcf of "<< A <<" "<< B <<": "<< hcf << endl;
    cout<<"lcm of "<< A <<" "<< B <<": "<< lcm<< endl;
}



