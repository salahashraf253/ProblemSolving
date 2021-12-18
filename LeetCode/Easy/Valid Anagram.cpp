class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        
        char a[28]={},b[28]={};
        for(int i=0;i<t.size();i++){
            a[s[i]-96]+=1;
            b[t[i] -96]+=1;
        }
        for(int i=1;i<=26;i++){
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
};
