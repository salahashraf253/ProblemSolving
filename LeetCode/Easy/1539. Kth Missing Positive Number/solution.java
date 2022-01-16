class Solution {
     public int findKthPositive(int[] arr, int k) {
        int ctr=0;
        for(int i=1;;i++){
            if(!binarySearch(arr,i)){
                if(++ctr==k){
                    return i;
                }
            }
        }
       
    }
    static boolean binarySearch(int []arr,int target){
        int mid,start=0,end=arr.length-1;
        while (start<=end){
            mid=(start+end)/2;
            if(arr[mid]==target) {
                return true;
            }
            else if(arr[mid]>target)
                end=mid-1;
            else start=mid+1;
        }
        return false;
    }
}
// Runtime: 4 ms, faster than 7.62% of Java online submissions for Kth Missing Positive Number.
// Memory Usage: 39.4 MB, less than 41.07% of Java online submissions for Kth Missing Positive Number.
