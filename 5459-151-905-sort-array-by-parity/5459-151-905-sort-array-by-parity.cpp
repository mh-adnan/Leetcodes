class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> e, o, ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                e.push_back(nums[i]);
            } else if (nums[i] % 2 != 0) {
                o.push_back(nums[i]);
            }
        }
        sort(e.begin(), e.end());
        sort(o.rbegin(), o.rend());
        int idx = 0;
        for (int i = 0; i < e.size(); i++) {
            ans[idx++] = e[i];
        }
        for (int i = 0; i < o.size(); i++) {
            ans[idx++] = o[i];
        }
        return ans;
    }
};
