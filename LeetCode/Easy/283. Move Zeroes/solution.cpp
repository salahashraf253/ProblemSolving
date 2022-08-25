class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=-1,sz=nums.size();
        for(int i=0;i<sz;i++){
            if(nums[i]==0){
                index=i;
                while (index < sz -1 && nums[index]==0)index++;
                swap(nums[i],nums[index]);
            }
        }
    
    }
};

//Runtime: 361 ms, faster than 5.73% of C++ online submissions for Move Zeroes.
// Memory Usage: 19.3 MB, less than 57.58% of C++ online submissions for Move Zeroes.
