class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)return false;
        int ctr=0;
        while(n){
            ctr+= ((n%2==1)?1:0);
            n/=2;
        }
        return ctr==1;
    }
};

// Runtime: 11 ms, faster than 5.57% of C++ online submissions for Power of Two.
// Memory Usage: 6 MB, less than 23.44% of C++ online submissions for Power of Two.

//another solution 

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        bool flag=true;
        while(n){
            if(n&1)
                if(flag)
                    flag=false;
                else return false;
            n/=2;
        }
        return true;
    }
};
// Runtime: 3 ms, faster than 59.97% of C++ online submissions for Power of Two.
// Memory Usage: 5.9 MB, less than 26.88% of C++ online submissions for Power of Two.
