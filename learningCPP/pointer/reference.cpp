#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int& ref{a};
    int b{11};
    a = 100; 
    cout<<"&a: "<<&a<<" &ref: "<<&ref<<endl;
    cout<<"a: "<<a<<" ref: "<<ref<<endl;

    ref = b;  // equdataent to a = b; changing are done in the same data
    cout<<"========================================="<<endl;
    cout<<"AFTER reassigning ref to b:"<<endl;
    cout<<&b<< " "<<&a<<endl;
    cout<<"dataue of b: " << b<<endl;
    cout<<"dataue of a: "<< a<<endl;
    cout<<"dataue of &a and &b and &ref "<<&b<< " "<<&a<<" "<<&ref<<endl;
    cout<<"dataue of a, b, ref: "<<a<<" "<<b<<" "<<ref<<endl;
    return 0;
}
/*
must initialize the reference: 
   int& ref{}; error
   reference can't be referenced to another but pointer can

*/ 