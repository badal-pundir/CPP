#include<bits/stdc++.h>
using namespace std;

int first_elem_Occrance(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int Find_Occrance(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    int arr[14] = {1,1,2,2,2,2};
    int k = 2;

    int first_elem = first_elem_Occrance(arr, 6, k);
    cout << first_elem;

    cout << " ";

    int last_elem = Find_Occrance(arr, 6, k);
    cout << last_elem;

    cout << endl;

    int sum = (last_elem-first_elem)+1;
    cout << sum;
    

    return 0;
}