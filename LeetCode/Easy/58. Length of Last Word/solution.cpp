class Solution {
public:
    int lengthOfLastWord(string s) {
        int ctr=0;
        int i=s.size()-1;
        while(s[i]==' ' && i>=0)
            i--;
        while(i>=0 && s[i]!=' '){
            i--;
            ctr++;
        }
        return ctr;
    }
};

// Runtime: 4 ms, faster than 53.48% of C++ online submissions for Length of Last Word.
// Memory Usage: 6.4 MB, less than 89.04% of C++ online submissions for Length of Last Word.
