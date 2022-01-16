class Solution {
     public boolean threeConsecutiveOdds(int[] arr) {
        int ctr=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]%2==1){
                if(++ctr==3){
                    return true;
                }
            }
            else ctr=0;
        }
        return false;
    }
}
// Runtime: 0 ms, faster than 100.00% of Java online submissions for Three Consecutive Odds.
// Memory Usage: 38.8 MB, less than 51.89% of Java online submissions for Three Consecutive Odds.
