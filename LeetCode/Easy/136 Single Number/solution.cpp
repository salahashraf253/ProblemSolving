class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            res^=nums[i];
        }
        return res;
    }
};

// Runtime: 23 ms, faster than 41.02% of C++ online submissions for Single Number.
// Memory Usage: 17 MB, less than 49.13% of C++ online submissions for Single Number.
