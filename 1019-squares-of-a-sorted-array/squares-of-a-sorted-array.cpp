class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;

        for(int num : nums) {
            if (num < 0){
                neg.push_back(num * num);
            } else {
                pos.push_back(num * num);
            }
        }
            
            reverse(neg.begin() , neg.end());

            int i = 0 , j = 0;
            vector<int> ans;

            while(i < neg.size() && j < pos.size()){
                if (neg[i]<=pos[j]){
                    ans.push_back(neg[i++]);
                }
                else{
                    ans.push_back(pos[j++]);
                }
            }

            while (i < neg.size()){
                ans.push_back(neg[i++]);
            }
            
            while (j < pos.size()){
                ans.push_back(pos[j++]);
            }
            return ans;
    }
};