class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;

        for (int num : nums) {
            if (num < 0)
                neg.push_back(num);
            else
                pos.push_back(num);
        }

        int n1 = neg.size();
        int n2 = pos.size();

        // Square negative numbers
        for (int i = 0; i < n1; i++) {
            neg[i] = neg[i] * neg[i];
        }

        // Reverse because larger absolute values come first
        reverse(neg.begin(), neg.end());

        // Square positive numbers
        for (int i = 0; i < n2; i++) {
            pos[i] = pos[i] * pos[i];
        }

        vector<int> res(n1 + n2);

        int i = 0, j = 0, id = 0;

        // Merge two sorted arrays
        while (i < n1 && j < n2) {
            if (neg[i] <= pos[j]) {
                res[id++] = neg[i++];
            } else {
                res[id++] = pos[j++];
            }
        }

        while (i < n1) {
            res[id++] = neg[i++];
        }

        while (j < n2) {
            res[id++] = pos[j++];
        }

        return res;
    }
};