class Solution {
public:
    int getSum(int a, int b) {
        int start = -2000,end=2000,mid;
        while(start<=end){
            mid=(start+end)/2;
            if(a+b==mid){
                return mid;
            }
            else if(a+b>mid){
                start=mid+1;
            }
            else end=mid-1;
        }
        return 0;
    }
};

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum of Two Integers.
// Memory Usage: 5.9 MB, less than 27.59% of C++ online submissions for Sum of Two Integers.
