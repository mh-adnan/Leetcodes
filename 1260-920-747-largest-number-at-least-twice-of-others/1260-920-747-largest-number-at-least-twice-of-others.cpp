class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> v(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        int hmm;
        for (int i = 0; i < nums.size(); i++) {
            if (maxi == nums[i]) {
                hmm = i;
            }
        }
        sort(nums.rbegin(), nums.rend());
        for (int i = 1; i < nums.size(); i++) {
            if ((nums[i] * 2) > maxi) {
                return -1;
            }
        }
        return hmm;
    }
};