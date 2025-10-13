class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
        int e = 0;
        int o = 0;
        int n = p.size();

        for (int i = 0; i < n; i++) {
            if (p[i] % 2 == 0) {
                e += 1;
            }
            else if (p[i] % 2 != 0) {
                o += 1;
            }
        }
        return min(e, o);
    }
};