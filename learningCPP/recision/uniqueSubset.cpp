#include<bits/stdc++.h>
using namespace std;


class Solution
{
private:
    void findSubsets(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>>& ans) {
        ans.push_back(ds);
        for(int i = ind; i < static_cast<int>(nums.size()); i++) {
            if(i!=ind && nums[i] == nums[i - 1]) continue;
            ds.push_back(nums[i]);
            findSubsets(i+1, nums, ds, ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        findSubsets(0, nums, ds, ans);
        cout<< endl;
    
        return ans;
    }
    Solution(/* args */);
    ~Solution();
};

Solution::Solution(/* args */)
{
    cout<<"This program will generate all the possible unique subsets \nfrom the given list.\n";
}

Solution::~Solution()
{
    cout<<"THE END";
}

int main() {
    vector<int> nums = {1, 2, 2, 3};
    vector<vector<int>> ans;
    Solution ob ;
    ans = ob.subsetsWithDup(nums);
    for(auto& it: ans) {
        cout<<"[";
        for(int i = 0 ;  i < static_cast<int>(it.size()) ; i++) {
            cout<< it[i];
        }
        cout<<"]";
        cout<< endl;
    }
    return 0;
}