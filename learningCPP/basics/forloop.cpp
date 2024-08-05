#include<iostream>
using namespace std;

int main() {
    const size_t COUNT{10};

    // for( unsigned int i{0}; i<COUNT; ++i) {
    //     cout<<i<<" I love c++"<<endl;
    // }
// Use size_t: a representation of some unsigned int for positive numebers[sizes]
    cout<<"size of size_t: "<< sizeof(size_t)<<endl;
    for(size_t i{0}; i<COUNT; ++i) {
        cout<<i<<" I love c++" <<endl;
    }
    
    return 0;
}