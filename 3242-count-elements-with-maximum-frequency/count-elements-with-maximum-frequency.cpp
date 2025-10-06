class Solution {
public:
    int maxFrequencyElements(vector<int>& n) {
        unordered_map<int, int> mp;
        for (int x : n) {
            mp[x]++;
        }
        vector<int> ans;
        for (auto [key, value] : mp) {
            ans.push_back(value);
        }
        int sum = 0;
        int maxi = *max_element(ans.begin(), ans.end());

        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == maxi) {
                sum += ans[i];
            }
        }
        return sum;
    }
};