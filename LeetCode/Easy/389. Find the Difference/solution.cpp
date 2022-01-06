class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.size()==0)return t[0];
        int freq[28]={};
        for(int i=0;i<s.size();i++){
            freq[s[i]-96]++;
            freq[t[i]-96]++;
        }
        freq[t[t.size()-1]-96]++;
        for(int i=1;i<=26;i++){
            if(freq[i] && freq[i]%2==1){
                return (i+96);
            }
        } 
        return char(96);
    }
};
