#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> result(nums.size(), 1);

        int pre = 1, post = 1;

        // Prefix pass
        for (int i = 0; i < nums.size(); i++) {
            result[i] = pre;
            pre = nums[i] * pre;
        }

        // Postfix pass
        for (int i = nums.size() - 1; i >= 0; i--) {
            result[i] = result[i] * post;
            post = nums[i] * post;
        }

        return result;
    }
};