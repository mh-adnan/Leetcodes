class Solution {
public:
    int minimumOperations(vector<int>& n) {
        int ans = 0;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == 1 || n[i] == 2) {
                ans += 1;
            } else if (n[i] > 2) {
                int k = n[i] % 3;
                if (k == 2) {
                    ans += 1;
                } else if (k != 2) {
                    ans += k;
                }
            }
        }
        return ans;
    }
};