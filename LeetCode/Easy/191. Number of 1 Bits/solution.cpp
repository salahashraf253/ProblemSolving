class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ctr=0;
        while(n){
            if(n&1)
                ctr++;
            n/=2;
        }
        return ctr;
    }
};

// Runtime: 8 ms, faster than 8.55% of C++ online submissions for Number of 1 Bits.
// Memory Usage: 5.9 MB, less than 47.96% of C++ online submissions for Number of 1 Bits.
