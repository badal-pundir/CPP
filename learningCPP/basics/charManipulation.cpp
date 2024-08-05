#include <iostream>
using namespace std;

int main()
{
    char message[]{"hello world"};
    // char* str2{"badal"};
    // cout<< str2;

    // str2 = "pundir";
    // cout<<" "<<str2;

    // message = 'd';
    size_t count = sizeof(message);

    for(size_t i{0}; i< count; ++i) 
    {
        cout<<std::isalnum(message[i])<<endl;
        
    }

}