class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx1=-1,mx2=-2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 > mx1){
                mx2=mx1;
                mx1=nums[i] -1 ;
            }
            else {
                mx2=max(mx2,nums[i] -1 );
            }
        }
        return mx2*mx1;
    }
};
