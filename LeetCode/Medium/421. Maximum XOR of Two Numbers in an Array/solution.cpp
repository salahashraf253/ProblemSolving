class Solution {
public:
  int findMaximumXOR(vector<int>& arr) {
    int mx = 0, mask = 0;

    set<int> st;
    for (int i = 30; i >= 0; i--) {
        mask |= (1 << i);

        for (int i = 0; i <arr.size(); ++i) {
            st.insert(arr[i] & mask);
        }
        int newMax = mx | (1 << i);
        for (int prefix : st) {
            if (st.count(newMax ^ prefix)) {
                mx = newMax;
                break;
            }
        }
        st.clear();
    }
    return mx;
}
};

// Runtime: 1128 ms, faster than 8.78% of C++ online submissions for Maximum XOR of Two Numbers in an Array.
// Memory Usage: 100.5 MB, less than 25.57% of C++ online submissions for Maximum XOR of Two Numbers in an Array.
