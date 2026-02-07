class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int sum = 0;
        for (int x : nums) sum += x;

        int n = nums.size();
        int avg = sum / n;   // 🔥 integer average

        for (int i = avg + 1; ; i++) {   // 🔥 strictly greater
            if (i > 0 && find(nums.begin(), nums.end(), i) == nums.end()) {
                return i;
            }
        }
    }
};
