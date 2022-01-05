class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sumOfAllNumbers=(nums.size()*(nums.size()+1))/2;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sumOfAllNumbers-sum;
    }
};
