class Solution {
public:
    string triangleType(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int a = nums[0] + nums[1];

        if (a <= nums[2]) {
            return "none";
        }

        else {
            set<int> s(nums.begin(), nums.end());

            if (s.size() == 1) {
                return "equilateral";
            }

            else if (s.size() == 2) {
                return "isosceles";
            }

            else if (s.size() == 3) {
                return "scalene";
            }
        }
        return "none";
    }
};