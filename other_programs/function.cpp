#include<iostream>
using namespace std;

// void with paramater
// void printname(string name){
//     cout << "Hi! " << name;
// }

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
} 

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    return a/b;
}
// return function with parameter
int main(){
    string name;
    int a, b, choice;
    int count = 2;
    // getline(cin, name);
    // printname(name);
    cout <<endl;
    cout << "===========CALCULATOR=========="<<endl <<endl;
    
    
    do
    {
        if(count==0){
            cout <<"Limit Exceded!" << endl;
            cout << "BYE!";
            return 0;
        }
        else{
            cout << count <<"Chances Left"<<endl;
        }
        cout<< "Enter two number: " <<endl;
        cin >> a >> b;
        
        cout << "Enter operation"<<endl;
        cout << "1. Addition"<<endl;
        cout << "2. Subtraction"<<endl;
        cout << "3. Multiply"<<endl;
        cout << "4. Divisoin"<<endl;
        cout << "5. Stop"<<endl;
        cin >> choice;

        
        if(choice!=5) 
            count--;
        

        switch (choice)
        {
        case 1:
            cout <<"Addition = "<<add(a, b)<<endl;
            break;
        case 2:
            cout<<"Subtraction = "<<sub(a, b)<<endl;
            break;
        case 3:
            cout <<"Multiplication = "<<multiply(a, b)<<endl;
            break;
        case 4:
            if (b==0)
            {
                cout<< "Indataid Input! Numinator can't be zero."<<endl;
                cout<< "BYE!";
                return 0;
            }
            
            cout <<"Division = "<<divide(a, b)<<endl;
            break;
        case 5: 
            cout << "BYE!";
            return 0;
            
        default:
            cout << "Wrong Operation"<<endl;
            break;
        }      
    } while (true);
                        
    
    

}