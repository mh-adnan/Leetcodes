class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> e, o, ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                e.push_back(nums[i]);
            } else if (nums[i] % 2 != 0) {
                o.push_back(nums[i]);
            }
        }
        sort(e.begin(), e.end());
        sort(o.begin(), o.end());
        int ee = 0;
        int oo = 0;
        int sz= nums.size();
        for (int i = 0; i < sz; i++) {
            if (i % 2 == 0) {
               ans[i] = e[ee++];
            } else if (i % 2 != 0) {
                 ans[i] = o[oo++];
            }
        }

        return ans;
    }
};