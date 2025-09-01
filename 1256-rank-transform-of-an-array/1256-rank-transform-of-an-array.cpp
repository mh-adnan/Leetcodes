class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> v = arr;
        sort(v.begin(), v.end());
        unordered_map<int, int> mp;
        int rank = 1;
        for (int i = 0; i < v.size(); i++) {
            if (mp.find(v[i]) == mp.end()) {
                mp[v[i]] = rank;
                rank++;
            }
        }
        vector<int> ans;
        for (auto x : arr) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};