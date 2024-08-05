#include <iostream>

using namespace std;

int trap(int height[], int size)
{   

    
    int left_max = 0, right_max = 0;
    int result = 0;
    
    for (int k = 0; k < size; k++)
    {
        left_max = height[k];
        right_max = height[k];
        for(int j = k-1; j >=0 ; j--){
            if(height[j] > left_max){
                left_max = height[j];
            }
        }
        ;
        // for right max

        for (int i = k+1; i < size; i++){
            if(height[i] > right_max){
                right_max = height[i];
            }
        }
       
        int tem = min(left_max, right_max) - height[k];
        if ( tem > 0){
            result += tem;
        }

        
        
    }
    
    return result; // Placeholder, replace with actual result
}

int main()
{
    int elevations[] = {1,8,6,2,5,4,8,3,7};
    int size = sizeof(elevations) / sizeof(int);
    int trappedWater;
    trappedWater = trap(elevations, size);

    cout << "Trapped water: " << trappedWater << endl;

    return 0;
}
