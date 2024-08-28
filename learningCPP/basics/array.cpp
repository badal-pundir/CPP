#include<bits/stdc++.h>
// #include<array>
using namespace std;

int main() {

    // int scores[10]{1, 2, 3, 4, 5};
/*  //----array of intigers
    // array of 10 ints.
    int scores[10]{1, 2, 3, 4, 5};
    
    scores[4] = 100;

    for(size_t i{0}; i<10; ++i) {
        cout<<"scores[" << i << "]: "<< scores[i]<< endl;
    }
    
    // Omit the size of the array at declaration
    // int class_sizes[]<------ERROR compilor doesn't know the size of
    // the array
    int class_sizes[] {10, 12, 15, 11, 18, 17};
    // will print this with a range based for loop
    cout<< endl<< "---------------------------";
    for(auto dataue: class_sizes) {
        cout<<"vlaue:" << dataue << endl;
    }

    //std::cout<<size(arr)
    int count{sizeof(scores)/sizeof(scores[0])};
    cout<< "size of arrays"<< endl << " scores[]: " << count;
    */


   // arrays of charactes

    char message[] {'H', 'e', 'l', 'l', 'o','\0'};
    cout<<message<< endl;
    // strign literal
    char message2[] {"Hello world!"};
    cout<<message2<<endl;

    char message3[] = {'H', 'e', 'l', 'l', 'o'}; // not a proper c string as ther is not null character
    cout<<message3<<" sizeof: "<< sizeof(message3)<< endl; // unexpected output

    int scores[10]{1, 2, 3, 4, 5};
    cout<<scores;
    return 0;

    
}