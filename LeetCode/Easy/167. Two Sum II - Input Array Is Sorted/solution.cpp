class Solution {
public:
    static int BinarySearch(vector<int>&nums,int target){
        int mid,start=0,end=nums.size()-1,loc=-1;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]<=target){
                start=mid+1;
                if(nums[mid]==target)loc=mid;
            }
            else if(nums[mid]>target)end=mid-1;
        }
        return loc;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res;
        int pos;
        for(int i=0;i<numbers.size();i++){
            pos=BinarySearch(numbers,target-numbers[i]);
            if(pos!=-1 && pos!=i){
                res.push_back(i+1);
                res.push_back(pos+1);
                break;
            }
        }
        return res;
    }
};
// Runtime: 22 ms, faster than 5.33% of C++ online submissions for Two Sum II - Input Array Is Sorted.
// Memory Usage: 9.6 MB, less than 43.98% of C++ online submissions for Two Sum II - Input Array Is Sorted
