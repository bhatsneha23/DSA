#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = 0;
        int sell = 1;
        int profit = 0;

        while (sell < prices.size()) {
            profit = max(profit, prices[sell] - prices[buy]);

            if (prices[sell] < prices[buy]) {
                buy = sell;
            }
            sell++;
        }
        return profit;
    }
};

int main() {
    Solution sol;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << sol.maxProfit(prices) << endl;

    return 0;
}
