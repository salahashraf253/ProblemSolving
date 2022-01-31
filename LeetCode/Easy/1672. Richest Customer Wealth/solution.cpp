class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0 , mx=-1;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            mx=max(mx,sum);
            sum=0;
        }
        return mx;
    }
};

// Runtime: 3 ms, faster than 95.59% of C++ online submissions for Richest Customer Wealth.
// Memory Usage: 7.8 MB, less than 49.93% of C++ online submissions for Richest Customer Wealth.
