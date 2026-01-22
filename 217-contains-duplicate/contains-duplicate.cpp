class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            // agar element pehle se hashmap mein hai
            if (mp.find(nums[i]) != mp.end()) {
                return true;
            }

            // nahi hai to add kar do
            mp[nums[i]] = 1;
        }

        // agar poora array check ho gaya
        return false;
    }
};
