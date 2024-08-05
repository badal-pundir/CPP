#include<iostream>
using namespace std;

int main() {
    // char* p_message{"Hello World!"};
    const char* p_message{"hello world"}; // this is array of char.
    // char message{"Hello World!"};
    // p_message = &message;
    // p_message[0] = 'H';
    cout<<*p_message<<endl; //print-->'h'
    cout<<p_message<<endl; // print-->hello world

    char message[] {"HELLO WORLD"};
    *message = 'h';
    message[1] = 'e';
    cout<<message<<endl;
    return 0;
}