class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<float> s;
        sort(nums.begin(), nums.end());

        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            float avg = (nums[l] + nums[r]) / 2.0;
            s.insert(avg);
            l++;
            r--;
            avg = 0;
        }
        return s.size();
    }
};