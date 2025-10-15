class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int e = 0;
        int o = 0;

        for (int i = 0; i < nums.size(); i += 2) {
            e += nums[i];
        }

        for (int i = 1; i < nums.size(); i += 2) {
            o += nums[i];
        }

        return e - o;
    }
};