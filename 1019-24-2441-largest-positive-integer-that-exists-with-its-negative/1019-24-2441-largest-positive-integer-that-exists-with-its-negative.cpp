class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> v;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                int k = nums[i] * (-1);
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] == k) {
                        v.push_back(nums[j]);
                    }
                }
            }
        }
        if (v.size() == 0) {
            return -1;
        }
        int a = *max_element(v.begin(), v.end());
        return a;
    }
};