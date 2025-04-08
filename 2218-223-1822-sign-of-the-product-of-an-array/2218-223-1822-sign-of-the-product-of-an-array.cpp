class Solution {
public:
    int arraySign(vector<int>& nums) {
        int z = 0, pos = 0, neg = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                z++;
            } else if (nums[i] > 0) {
                pos++;
            } else
                neg++;
        }
        if (z > 0) {
            return 0;
        }
        if (neg % 2 == 0) {
            return 1;
        } else
            return -1;
    }
};