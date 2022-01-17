class Solution {
public:
bool wordPattern(string pattern, string s) {
    map<char,string>mp;
    map<string,bool>found;
    string word="";
    int ctr=0 , noOfWords=0;
    s+=' ';
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            if(!found[word] && mp[pattern[ctr]]==""){
                found[word]=1;
                mp[pattern[ctr]]=word;
            }
            else if(mp[pattern[ctr]] != word){
                return false;
            }
            noOfWords++;
            word="";
            ctr++;
        }
        else word.push_back(s[i]);
    }
    return noOfWords==pattern.size();
}
};

// Runtime: 6 ms, faster than 5.47% of C++ online submissions for Word Pattern.
// Memory Usage: 6.5 MB, less than 18.55% of C++ online submissions for Word Pattern.
