class Solution {
public:
    string addBinary(string a, string b) {
        int rem=0,size_a=a.size()-1,size_b=b.size()-1;
        string res="";
        while(size_a >=0 || size_b >=0 || rem==1){
            if(size_a >=0){
                rem+=a[size_a]-'0';
            }
            if(size_b>=0){
                rem+=b[size_b]-'0';
            }
            res.push_back(char(rem%2 +'0'));
            rem/=2;
            size_a--,size_b--;
        }
        for(int i=0;i<res.size()/2;i++){
            swap(res[i],res[res.size()-i-1]);
        }
        return res;
    }
};
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Add Binary.
// Memory Usage: 6.4 MB, less than 59.77% of C++ online submissions for Add Binary.
