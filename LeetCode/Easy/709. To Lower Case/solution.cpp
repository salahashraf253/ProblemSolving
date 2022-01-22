class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]+=32;
            }
        }
        return s;
    }
};

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for To Lower Case.
// Memory Usage: 6.2 MB, less than 53.98% of C++ online submissions for To Lower Case.
