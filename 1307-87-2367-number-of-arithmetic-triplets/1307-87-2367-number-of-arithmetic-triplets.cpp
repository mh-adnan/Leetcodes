class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int d) {
        int cnt = 0;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[j] - nums[i] == d && nums[k] - nums[j] == d) {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};