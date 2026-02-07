class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
       
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int n = nums.size();
        int avg = (sum / n);

        int ans;
        for (int i = avg + 1;; i++) {

            if (i > 0) {
                auto it = find(nums.begin(), nums.end(), i);

                if (it == nums.end()) {
                    return i;
                }
            }
        }
        return -1;
    }
};