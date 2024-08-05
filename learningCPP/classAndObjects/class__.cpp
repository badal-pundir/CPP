#include<iostream>
#include "constants.h" // for constants
#include "cylinder.h"
using namespace std;

int main() {
    // Cylinder cylinder1;
    Cylinder cylinder2(3.0, 4.3);
    // Cylinder* p_cyliner1 = &cylinder2; 
    Cylinder* p_cyliner2 = new Cylinder(100, 2); 
    // cout<<"volume: " <<"Default constructor:" << cylinder1.volume()<<endl; 
    cout<<"volume: " <<"Parameterise constructor:" <<cylinder2.volume()<<endl; 
    cout<<"volume: " <<"Parameterise constructor:" <<(p_cyliner2)->volume()<<endl; 


    //modify our objects
    // cylinder2.set_base_radius(100);
    // cylinder2.set_height(10);
    // cout<<"volume: " << cylinder1.volume()<<endl;
    delete p_cyliner2; 
    return 0; 

}