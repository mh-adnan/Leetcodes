class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        for (int i = 0; i < k; i++) {
            auto mini = min_element(nums.begin(), nums.end());
            *mini *= m;
        }
        return nums;
    }
};