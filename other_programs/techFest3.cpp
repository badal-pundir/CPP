#include <bits/stdc++.h>
using namespace std;

// Union
vector<int> find_Union(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(a[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        st.insert(b[i]);
    }

    vector<int> temp;

    for (auto it : st)
    {
        temp.push_back(it);
    }

    return temp;
}

// Intersection
vector<int> find_Intersection(vector<int> &A, int n, vector<int> &B, int m)
{
    int i = 0;
    int j = 0;

    vector<int> ans;

    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < A[i])
        {
            j++;
        }
        else
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 3, 4, 5, 7};
    vector<int> arr2 = {2, 3, 5, 6};

    vector<int> ans1 = find_Union(arr1, arr2);

    for (auto i : ans1)
    {
        cout << i << ' ';
    }

    cout << endl;

    vector<int> ans2 = find_Intersection(arr1, 5, arr2, 4);

    for (auto i : ans2)
    {
        cout << i << " ";
    }

    return 0;
}