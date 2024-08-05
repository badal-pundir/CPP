#include<iostream>
using namespace std;

class Dog {
    public:
        Dog() = default;
        Dog(string name_param, string breed_paarm, int age_param);
        ~Dog(); // destructor don't have parameter in cpp.
    private:
        string name;
        string breed;
        int * p_age{nullptr};
};

Dog::Dog(string name_param, string breed_para, int age_param) {
    name = name_param;
    breed = breed_para;
    p_age = new int ;
    *p_age = age_param;
    cout<< "Dog constructor called for: "<< name<<endl;

}
Dog::~Dog() {
    delete p_age; // delete the memory allocated to in the constructor;
    cout<< "Dog destructor called for: "<< name<<endl;
}

void some_fun() {
    Dog my_dog("Fluffy", "Shepherd", 2);
}
int main() {
    // Dog my_dog("Fluffy", "Shepherd", 2);
    some_fun();
    cout<< "DONE!"<<endl;
    return 0;
}