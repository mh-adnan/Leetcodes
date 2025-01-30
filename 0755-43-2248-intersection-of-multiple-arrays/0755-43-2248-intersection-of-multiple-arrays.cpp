class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            for (auto it : nums[i]) {
                mp[it]++;
            }
        }
        vector<int> v;
        for (auto it : mp) {
            if (it.second == nums.size()) {
                v.push_back(it.first);
            }
        }
        return v;
    }
};