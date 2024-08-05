#ifndef PERSON_H
#define PERSON_H

#include<iostream>
// #include "player.h"
using namespace std;
 
class Person
{
    friend ostream& operator<<(ostream& out, const Person& person);
private:
    string first_name{"mysterious"};
    string last_name{"Person"};
public:
    // Person() = default;
    Person(const string& first_name_param, const string& last_name_param);
    // ~Person();

    //Getters
    string get_first_name() const{
        return  first_name;
    }
    string get_last_name() const{
        return last_name;
    }
};

#endif
