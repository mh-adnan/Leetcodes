class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 10) {
                v.push_back(nums[i]);
            } else {
                vector<int> v1;
                int s = nums[i];
                while (s != 0) {
                    int n = s % 10;
                    v1.push_back(n);
                    s = s / 10;
                }
                reverse(v1.begin(), v1.end());
                v.insert(v.end(), v1.begin(), v1.end());
            }
        }
        return v;
    }
};