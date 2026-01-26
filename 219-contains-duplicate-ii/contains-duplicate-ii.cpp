class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, int> mp;  // value -> last index

        for (int i = 0; i < nums.size(); i++) {

            // agar element pehle se hashmap mein hai
            if (mp.find(nums[i]) != mp.end()) {

                // index difference check karo
                if (abs(i - mp[nums[i]]) <= k) {
                    return true;
                }
            }

            // har baar current index update karo
            mp[nums[i]] = i;
        }

        return false;
    }
};
