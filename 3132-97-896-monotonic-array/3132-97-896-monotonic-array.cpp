class Solution {
public:
    bool isMonotonic(vector<int>& n) {
        int up = 0;
        int down = 0;

        for (int i = 0; i < n.size() - 1; i++) {
            if (n[i] >= n[i + 1]) {
                down++;
            }
        }

        if (down == n.size() - 1) {
            reverse(n.begin(), n.end());
        }

        for (int i = 0; i < n.size() - 1; i++) {
            if (n[i] <= n[i + 1]) {
                up++;
            } else
                return false;
        }

        return true;
    }
};