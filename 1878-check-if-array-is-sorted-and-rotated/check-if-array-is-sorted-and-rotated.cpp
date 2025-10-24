// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n = nums.size();

//         for(int i = 1 ; i < n ; i++){
//             if(nums[i]>=nums[i-1]){
//                 continue;
//             }
//             else {
//                 return false;
//             }
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {  // use modulo for circular check
                count++;
            }
            if (count > 1) return false;
        }
        return true;
    }
};
