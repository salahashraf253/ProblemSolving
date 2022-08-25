class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)return;
            int sz=m+n,f=0,s=0;
                vector<int>ans(sz);
        if(m==0){
            for(int i=0;i<nums2.size();i++){
                nums1[i]=nums2[i];
            }
            return ;
        }
        else {
            for(int i=0;i<sz;i++){
                if(f>=m){
                    ans[i]=nums2[s++];
                    continue;
                }
                if(s>=n){
                    ans[i]=nums1[f++];
                    continue;
                }
                if(nums1[f]<=nums2[s]){
                    ans[i]=nums1[f++];
                }
                else{
                     ans[i]=nums2[s++];
                }
            }
        }
        for(int i=0;i<sz;i++){
            nums1[i]=ans[i];
        }
    }
};
