class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& g) {
        vector<int> ans;
        unordered_map<int, int> mp;

        for (int i = 0; i < g.size(); i++) {
            for (int j = 0; j < g[i].size(); j++) {
                int x = g[i][j];
                mp[x]++;
            }
        }

        int rep = -1, mis = -1;
        int n = g.size();

        for (int i = 1; i <= n * n; i++) {
            if (mp[i] == 2)
                rep = i;
            if (mp[i] == 0)
                mis = i;
        }

        ans.push_back(rep);
        ans.push_back(mis);
        return ans;
    }
};