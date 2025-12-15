#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            int rem = target - nums[i];

            if (mp.find(rem)!=mp.end()){  //mtlb present hai
                return {mp[rem],i};
            }
            mp[nums[i]] = i ;
        }
        return {};
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = s.twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> nums(n);
//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     int target;
//     cout << "Enter target: ";
//     cin >> target;

//     Solution s;
//     vector<int> result = s.twoSum(nums, target);

//     cout << "Indices: ";
//     for (int i : result) {
//         cout << i << " ";
//     }

//     return 0;
// }