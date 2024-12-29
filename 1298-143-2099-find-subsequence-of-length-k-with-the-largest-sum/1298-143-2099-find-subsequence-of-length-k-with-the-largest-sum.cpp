class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i});
        }
        sort(v.rbegin(), v.rend());
        vector<pair<int, int>> v2(v.begin(), v.begin() + k);

        sort(v2.begin(), v2.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second < b.second;
        });

        vector<int> res;
        for (auto p : v2) {
            res.push_back(p.first);
        }
        return res;
    }
};