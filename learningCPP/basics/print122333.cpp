#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int tem = 1;    

    do{
        int i = 1;
        while( i<= tem){
            cout<< tem; 
            i++;       
        }
        tem ++;
        
    }while (tem <= n);
   
    
}