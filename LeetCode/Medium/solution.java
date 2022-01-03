class Solution {
    public void sortColors(int[] nums) {
        //counting sort
        int[]freq=new int[5];
        boolean isSorted=true;
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]>nums[i+1]){
                isSorted=false;
            }
            freq[nums[i]]++;
        }
        if(isSorted)
          return;   //array is already sorted
        freq[nums[nums.length-1]]++;
        int index=0;
        for(int i=0;i<=2;i++){
            while (freq[i]-- >0){
                nums[index++]=i;
            }
        }
    }
}
