class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1)return true;
        
        if(word[0]>='a'&&word[0]<='z'){
            for(int i=1;i<word.size();i++){
                if(!(word[i]>='a' && word[i]<='z'))
                    return false;
            }
        }
        else {
            bool isCapital=((word[1]>='a'&&word[1]<='z')?false:true);
            if(isCapital){
                for(int i=2;i<word.size();i++){
                    if(!(word[i]>='A' && word[i]<='Z'))
                        return false;
                }
            }
            else {
               for(int i=2;i<word.size();i++){
                    if(!(word[i]>='a' && word[i]<='z'))
                        return false;
              }
            }
            
        }
        return true;
    }
};
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Detect Capital.
// Memory Usage: 6.1 MB, less than 19.00% of C++ online submissions for Detect Capital.
