class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (auto x : arr) {
            mp[x]++;
        }
        int n = arr.size();
        int a = n / 4;
        vector<int> ans, v;
        for (auto [key, val] : mp) {

            v.push_back(val);
        }
        int p = *max_element(v.begin(), v.end());

        for (auto [key, val] : mp) {
            if (val == p) {
                ans.push_back(key);
            }
        }
        return ans[0];
    }
};