#include<iostream>
using namespace std;

int main() {
    int principal_value;
    int rate_of_interest;
    int time_duration;

    cout << "Enter the following information:\n";
    cout << "principal: ";
    cin >> principal_value;
    cout << "\nrate of interest: ";
    cin >> rate_of_interest;
    cout <<"\ntime duration ;
    cin >> time_duration;

    cout<<"Simple Interest: "<< ( principal_value * rate_of_interest * time_duration) / 100;

    return 0;
}