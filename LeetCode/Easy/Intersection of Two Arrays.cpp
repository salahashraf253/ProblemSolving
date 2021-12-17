class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        map<int,int>mp;
        map<int,int>mp2;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        for(auto &x:mp){
            int m=min(x.second,mp2[x.first]);
            for(int i=0;i<m;i++){
                res.push_back(x.first);
            }
        }
        return res;
    }
};
