class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }
        vector<int> v;
        for (auto it : mp) {
            v.push_back(it.second);
        }
        int ans;
        ans = *max_element(v.begin(), v.end());

        for (auto it : mp) {
            if (it.second == ans) {
                return it.first;
            }
        }
        return -1;
    }
};