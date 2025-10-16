class Solution {
public:
    int timeRequiredToBuy(vector<int>& tic, int k) {
        int ans = 0;
        for (int i = 0; i < tic.size(); i++) {
            if (i <= k) {
                ans += min(tic[i], tic[k]);
            } else {
                ans += min(tic[i], tic[k] - 1);
            }
        }
        return ans;
    }
};