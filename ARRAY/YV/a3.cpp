#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Solution 
{
public: 
    bool containsDuplicate(vector<int>& nums)
    {
    unordered_map<int, int> mp;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if (mp.find(nums[i]) != mp.end())
        {
            return true;
        }

        mp[nums[i]] = 1 ;
    }
    return false;
    }
};

int main() 
{
    Solution sol ;
    vector<int> prices = {1 ,2 , 3, 1};
    cout << sol.containsDuplicate(prices) <<endl ;
    return 0;
}