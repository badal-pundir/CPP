#include <iostream>
using namespace std;

// void function
void enter_bar(int age);

// void function with no argument
void message();

// return with argument
int my_greater(int a, int b);
int my_min(int a, int b);

int  main(){

    enter_bar(22);
    message();
    cout<< "Max of 2 and 4 is: " <<my_greater(2, 4)<< endl;
    cout<< "Min of 1 and 4 is: "<< my_min(1, 4)<< endl;

}

void enter_bar(int age){
    cout<< "your age is: "<< age<<endl;
}

void message(){
    cout<<"Hi there"<<endl;
}

int my_greater(int a, int b){
    return (a>b)? a:b;
}

int my_min(int a, int b){
    return (a<b)? a: b;
}