#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void findAllSubString(string str, int ind, string ds, vector<string>& ans) {
        ans.push_back(ds);
        if(ind == static_cast<int>(str.size())){
            return;
        }
        for(int i = ind; i < static_cast<int>(str.size()); i++) {
            ds += str[i];
            findAllSubString(str, i + 1, ds, ans);
        }
        return;
    }
public:
    vector<string> getAllSubString(string str) {
        string ds = "";
        vector<string> ans;

        findAllSubString(str, 0, ds, ans);
        return ans;
    }
    Solution(/* args */);
    ~Solution();
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

int main() {
    string str = "badal";
    vector<string> ans;
    Solution ob;

    ans = ob.getAllSubString(str);

    for(auto& it: ans) {
        cout<<"[";
        cout<< it;
        cout<<"]";
        cout<< endl;
    }
    return 0;
}