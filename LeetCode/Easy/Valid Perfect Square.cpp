class Solution {
public:
    bool isPerfectSquare(int num) {
        long long res=1,mx=1,i=1;
        while(true){
            res=i*i;
            if(res>num){
                return (i-1)*(i-1)==num;
            }
            mx=max(mx,res);
            i++;
        }
    }
};
