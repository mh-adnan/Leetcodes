class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> l, ans;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                cnt++;
            } else {
                l.push_back(nums[i]);
            }
        }
        for (int i = 1; i <= cnt; i++) {
            l.push_back(0);
        }
        nums.clear();
        for (int i = 0; i < l.size(); i++) {
            nums.push_back(l[i]);
        }
    }
};