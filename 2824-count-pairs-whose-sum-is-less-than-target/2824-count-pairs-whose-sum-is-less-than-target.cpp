class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i = 0;
        int j = 1;
        int ans = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] < target) {
                    ans++;
                }
            }
        }
        return ans;
    }
};