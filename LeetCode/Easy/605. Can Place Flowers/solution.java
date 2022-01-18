class Solution {
    static boolean isValidIndex(int[] flowerbed,int i){
        int sz=flowerbed.length;
        if(flowerbed[i]!=0)
            return false;
        if(i-1>=0){
            if(flowerbed[i-1]!=0)
                return false;
        }
        if(i+1<sz){
            if(flowerbed[i+1]!=0)
                return false;
        }
        return true;
    }
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        for(int i=0;i<flowerbed.length && n!=0;i++){
            if(isValidIndex(flowerbed,i)){
                flowerbed[i]=1;
                n--;
            }
        }
        return n==0;
    }
}

// Runtime: 2 ms, faster than 31.85% of Java online submissions for Can Place Flowers.
// Memory Usage: 49 MB, less than 39.97% of Java online submissions for Can Place Flowers.
  
