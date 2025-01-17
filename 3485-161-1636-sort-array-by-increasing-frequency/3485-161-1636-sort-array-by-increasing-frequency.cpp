class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 if (a.second == b.second) {
                     return a.first > b.first;
                 } else {
                     return a.second < b.second;
                 }
             });
        vector<int> res;
        for (auto it : v) {
            for (int i = 0; i < it.second; i++) {
                res.push_back(it.first);
            }
        }
        return res;
    }
};