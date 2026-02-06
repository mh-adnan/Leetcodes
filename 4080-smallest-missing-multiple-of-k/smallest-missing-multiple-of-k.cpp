class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans;
        sort(nums.begin(), nums.end());

        for (int i = 1; i <= 100; i++) {
            int m = k * i;
            auto it = find(nums.begin(), nums.end(), m);
            if (it == nums.end()) {
                ans = m;
                break;
            }
        }
        return ans;
    }
};