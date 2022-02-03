class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto x:mp){
            if(x.second.size()>=2){
                for(int i=0;i<x.second.size();i++){
                    for(int j=0;j<x.second.size();j++){
                        if(i!=j){
                            if(abs(x.second[i]-x.second[j])<=k)return true;
                        }
                    }
                }
            }
        }
        return false;
    }
};

// Runtime: 712 ms, faster than 5.02% of C++ online submissions for Contains Duplicate II.
// Memory Usage: 119.6 MB, less than 5.20% of C++ online submissions for Contains Duplicate II.
