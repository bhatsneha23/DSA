#include <iostream>
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

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> result = obj.productExceptSelf(nums);

    cout << "Output: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}