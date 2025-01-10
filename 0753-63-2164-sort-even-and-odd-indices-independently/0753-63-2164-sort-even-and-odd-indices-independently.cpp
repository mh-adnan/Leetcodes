class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> e, o, ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                e.push_back(nums[i]);
            } else if (i % 2 != 0) {
                o.push_back(nums[i]);
            }
        }
        sort(e.begin(), e.end());
        sort(o.rbegin(), o.rend());
        int evenIdx = 0, oddIdx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                ans[i] = e[evenIdx++];
            } else if (i % 2 != 0) {
                ans[i] = o[oddIdx++];
            }
        }
        return ans;
    }
};