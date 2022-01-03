class Solution {
    private int getFirstPos(int nums[],int target){
        int start=0,end=nums.length-1,pos=-1,mid;
        boolean found=false;
        while (start<=end){
            mid=(start+end)/2;
            if(nums[mid]<target){
                start=mid+1;
            }
            else {
                if(nums[mid]==target)found=true;
                end=mid-1;
                pos=mid;
            }
        }
        if(!found)return -1;
        return pos;
    }
  
    private int getLastPos(int nums[],int target){
        int start=0,end=nums.length-1,pos=-1,mid;
        boolean found=false;
        while (start<=end){
            mid=(start+end)/2;
            if(nums[mid]<=target){
                start=mid+1;
                pos=mid;
                if(nums[mid]==target)found=true;
            }
            else {
                end=mid-1;
            }
        }
        if(!found)return -1;
        return pos;
    }
  
    public int[] searchRange(int[] nums, int target) {
        int []answer=new int[2];
        answer[0]=getFirstPos(nums,target);
        answer[1]=getLastPos(nums,target);
        return answer;
    }
}
