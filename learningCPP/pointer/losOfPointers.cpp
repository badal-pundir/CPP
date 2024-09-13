#include <iostream>
using namespace std;

int main()
{
    // int* val = new int[10000000000000];
    /*
        for(size_t i{0}; i< 100000; ++i) {
            int* val = new int[100000000];
        }
    */
    /*
        for(size_t i{0}; i< 100000; ++i) {
            try {
                int* val = new int[100000000];

                }catch(exception& ex){
                    cout<<"Something went wrong "<< ex.what()<<endl;
                    break;
                }
        }

    */
    // SECOND METHOD TO HANDLING ERROR.
    /*
        for(size_t i{0}; i< 100000; ++i) {
            int* val = new(std::nothrow) int[100000000];

            if(val == nullptr) {
                cout<<"Memory allocation failed";
                break;
            }else {
                cout<< "Memory allocation succeeded.";
            }

        }
    */

    int *p_number{};

    p_number = new int();
    *p_number = 23;   // OR p_number = new int(23) would have worked same
    if (p_number) // --> equavalent if(!(p_number == nullptr))
    {
        cout << "p_number points to a valID address: " << p_number <<" value: "<< *p_number<< endl;
    }
    else
    {
        cout << "p_number pints to an INvalID address." << endl;
    }

    delete p_number;
    nullptr; // p_number = nullptr;


    int *p_number{};

    delete p_number; // This won't cause any problem
                    // if p_number contains nullptr
    cout << "Program ending well" << endl;

    return 0;
}
