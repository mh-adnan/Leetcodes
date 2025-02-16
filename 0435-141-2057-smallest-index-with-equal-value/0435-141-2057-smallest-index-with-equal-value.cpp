class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            int k = i % 10;
            if (nums[i] == k) {
                v.push_back(i);
            }
        }
        if (v.size() == 0) {
            return -1;
        }
        sort(v.begin(), v.end());
        return v[0];
    }
};