class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        if(s==goal)return true;
        int ctr=s.size();
        while(ctr--!=0){
            s = s.substr(1,s.size()) + s[0];
            if(s==goal)
                return true;
        }
        return false;
    }
};
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotate String.
// Memory Usage: 7.1 MB, less than 10.61% of C++ online submissions for Rotate String.
