class Solution {
public:
    bool isBoomerang(vector<vector<int>>& arr) {
        return !((arr[1][0]-arr[0][0])*(arr[2][1]-arr[0][1])==
            (arr[2][0]-arr[0][0])*(arr[1][1]-arr[0][1]));
    }
};

// Runtime: 7 ms, faster than 11.02% of C++ online submissions for Valid Boomerang.
// Memory Usage: 10.4 MB, less than 9.14% of C++ online submissions for Valid
