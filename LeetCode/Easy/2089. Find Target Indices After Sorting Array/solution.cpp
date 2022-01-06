//RunTime : 7ms
//Memory usage : 11.6 MB

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int freq[101]={};
        bool isFound=false;
        int mn=105,mx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                isFound=true;
            }
            mn=min(mn,nums[i]);
            mx=max(mx,nums[i]);
            freq[nums[i]]++;
        }
        vector<int>sol;
        if(!isFound)return sol;
        int index=0;
        for(int i=mn;i<=min(mx,target);i++){
            while(freq[i]-->0){
                nums[index]=i;
                if(i==target){
                    sol.push_back(index);
                }
                index++;
            }
        }
        return sol;
    }
};
