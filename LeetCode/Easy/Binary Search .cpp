class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1,mid;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==target)
                return mid;
            else if(arr[mid]>target)end=mid-1;
            else start=mid+1;
        }
        return -1;
        
    }
};
