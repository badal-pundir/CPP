#include<bits\stdc++.h>
#include<math.h>
using namespace std;

class NewtonSQRT {
    public:
        double sqrt(double n) {
            double x = n;
            // nwr mthod: root = (x + n/x)/2
            // x: assume root
            double root; 
            while (true)
            {       
                //calculating the assumed root;   
                root = 0.5 * (x + (n/x));  
                /*we are trying to minimize the error:
                |root - error| should be < precission 
                here precissionvalue is 0.4
                we can take even more precise value like 0.3, 0.2, 0.1.
                */
                if(abs(root - x) < 0.4) {
                    break;
                }
                // update the assume root;
                x = root;
            }

            return root;
            
        }
};

int main() {
    NewtonSQRT ob;
    cout<<ob.sqrt(40);
}
