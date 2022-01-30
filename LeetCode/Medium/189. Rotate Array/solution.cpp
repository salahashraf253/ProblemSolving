class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        deque<int>dq;
        for(int i=0;i<nums.size();i++){
            dq.push_back(nums[i]);
        }
        while(k--){
            dq.push_front(dq.back());
            dq.pop_back();
        }
        int i=0;
        while(!dq.empty()){
            nums[i++]=dq.front();
            dq.pop_front();
        }
    }
};

// Runtime: 64 ms, faster than 10.26% of C++ online submissions for Rotate Array.
// Memory Usage: 26.2 MB, less than 7.88% of C++ online submissions for Rotate Array.
