class Solution {
public:
    int findMiddleIndex(vector<int>& n) {
        int tot = 0;
        for (int x : n) {
            tot += x;
        }
        int l = 0;
        for (int i = 0; i < n.size(); i++) {

            int r = tot - l - n[i];
            if (l == r) {
                return i;
            }
            l += n[i];
        }
        return -1;
    }
};