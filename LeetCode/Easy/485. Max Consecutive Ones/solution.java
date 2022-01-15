class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int ctr=0,mx=-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1){
                ctr++;
            }
            else {
                mx=Integer.max(mx,ctr);
                ctr=0;
            }
        }
        return Integer.max(mx,ctr);
    }
}

// Runtime: 2 ms, faster than 69.40% of Java online submissions for Max Consecutive Ones.
// Memory Usage: 53.4 MB, less than 14.40% of Java online submissions for Max Consecutive Ones.
