class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int a, b, c;
            int n = nums.size();
            a = nums[n - 1];
            b = nums[n - 2];
            c = nums[0];

            return (a+b-c);
           
        }
        return -1;
    }
};