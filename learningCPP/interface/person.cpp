#include "person.h"
using namespace std;

// Person::Person() :first_name("None"), last_name("None")  {}

Person::Person(const string& first_name_param, const string& last_name_param) :
first_name(first_name_param), last_name(last_name_param) {};


// Person:: ~Person() {}

ostream& operator<<(ostream& out, const Person& person) {
    out<< "Person [" << person.first_name <<" "<< person.last_name << "]";
}
