class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }
        vector<int> v, ans;
        for (auto it : mp) {
            v.push_back(it.second);
        }
        int res = nums.size() / 3;
        for (auto it : mp) {
            if (it.second > res) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
