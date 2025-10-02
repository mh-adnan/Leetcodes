class Solution {
public:
    int minOperations(vector<int>& n) {
        int ans = 0;

        vector<int> cp;
        cp = n;
        for (int i = 0; i < n.size() - 1; i++) {
            if (n[i] >= n[i + 1]) {
                n[i + 1] = n[i] + 1;
            }
        }

        for (int i = 0; i < n.size(); i++) {
            ans += n[i] - cp[i];
        }
        return ans;
    }
};