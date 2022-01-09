class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
        n=abs(n);
        //1162261667 is maximum power of three in integer type range
        return 1162261467 % n == 0;
    }
};

// Runtime: 37 ms, faster than 15.60% of C++ online submissions for Power of Three.
// Memory Usage: 5.9 MB, less than 27.36% of C++ online submissions for Power of Three.
