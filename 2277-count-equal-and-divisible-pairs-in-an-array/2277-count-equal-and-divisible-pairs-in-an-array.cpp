class Solution {
public:
    int countPairs(vector<int>& n, int k) {
        int ans = 0;
        for (int i = 0; i < n.size() - 1; i++) {
            for (int j = i + 1; j < n.size(); j++) {
                int p = i * j;
                if (n[i] == n[j] && p % k == 0) {
                    ans++;
                }
            }
        }
        return ans;
    }
};