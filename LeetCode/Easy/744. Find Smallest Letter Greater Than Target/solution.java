class Solution {
    static int binarySearch(char[]letters,char target){
        if(target >= letters[letters.length-1]){
            return 0;
        }
        int mid,start=0,end=letters.length,loc=0;
        while (start<=end){
            mid=(start+end)/2;
            if(letters[mid] >target){
                end=mid-1;
                loc=mid;
            }
            else if(letters[mid] <= target){
                start=mid+1;
            }
        }
        return loc;
    }
    
    public char nextGreatestLetter(char[] letters, char target) {
        return letters[binarySearch(letters,target)];
    }
}

// Runtime: 1 ms, faster than 23.36% of Java online submissions for Find Smallest Letter Greater Than Target.
// Memory Usage: 45.3 MB, less than 8.44% of Java online submissions for Find Smallest Letter Greater Than Target.
