#include<iostream>
#include<string.h>
#include<cstring>   // For C-style strings
using namespace std;

int main() {
    string name = "badal";
    char name2[] = "badal";
    int i = 0;
    while(name[i] != '\0'){
        i ++;
    }
    cout<< "length of word "<< name<< "  is "<< i;
    cout<< "\nlength of word "<< name<< "  is " << name.length();
    cout<< "\nlength of word "<< name<< "  is " << strlen(name2);
    return 0;
}