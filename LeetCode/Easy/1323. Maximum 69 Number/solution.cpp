class Solution {
public:
    int maximum69Number (int num) {
        string s="";
        int n=num;
        while(n>0){
            s.push_back((char)((n%10)+48));
            n/=10;
        }
        for(int i=0;i<s.size()/2;i++){
            swap(s[i],s[s.size()-i-1]);
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='6'){
                s[i]='9';
                break;
            }
        }
        n=0;
        for(int i=0;i<s.size();i++){
            n*=10;
            n+=(s[i]-'0');
        }
        return n;
    }
};
// RunTime : 0 ms 
// Memory Usage : 5.9 MB
