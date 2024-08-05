#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> height{1,8,6,2,5,4,8,3,7}; // {1, 2, 4, 3}; //

    // int max = 0;
    // int tem = 0;

    // for(auto i = 0; i < int(heights.size()); i++){

    //     for(auto j = i; j< int(heights.size()); j++){
    //         tem = (j - i) * min(heights.at(i), heights.at(j));
    //         if (tem > max){
    //             max = tem;
    //         }
    //     }
    // }
    // cout << max;
    int max = 0;
    int tem = 0;
    int size = height.size();
    int maxheight = *(height.end()-1);
    // cout << maxheight << " ";
    int maxindex = size - 1;
    for (auto i = 0; i < size; i++)
    {

        if (height.at(i) < maxheight)
        {
            // continue;
            tem = (maxindex - i) * height.at(i);
            if (tem > max){
                max = tem;
            }
        }
        else
        {
            for (auto j = maxindex; j > i; j--)
            {

                tem = (j - i) * min(height.at(i), height.at(j));

                if (tem > max)
                {
                    max = tem;
                    maxheight = height.at(j);
                    maxindex = j;
                }
            }
        }
    }
    cout<< max;
    return max;
}