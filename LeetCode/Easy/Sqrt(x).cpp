class Solution {
public:
    int mySqrt(int x) {
        long long  mx=1, i=1,res=1;
        
        while (true){
            res=i*i;
            if(res>x){
                return i-1;
            }
            i++;
            mx=max(mx,res);
        }
    }
};
