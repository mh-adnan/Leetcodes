
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a1, vector<int>& a2) {
        unordered_map<int, int> mp;
        for (int x : a1) {
            mp[x]++;
        }
        vector<int> ans;

        for (int i = 0; i < a2.size(); i++) {
            int key = a2[i];
            while (mp[key] > 0) {
                ans.push_back(key);
                mp[key]--;
            }
        }
        vector<int> rem;
        for (auto [key, val] : mp) {
            while (val--) {
                rem.push_back(key);
            }
        }
        sort(rem.begin(), rem.end());
        ans.insert(ans.end(), rem.begin(), rem.end());

        return ans;
    }
};
