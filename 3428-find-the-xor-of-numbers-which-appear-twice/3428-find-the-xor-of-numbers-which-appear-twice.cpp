class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        set<int> s;
        for (int x : nums) {
            s.insert(x);
        }

        if (s.size() == nums.size()) {
            return 0;
        }

        unordered_map<int, int> mp;
        vector<int> v;

        for (int x : nums) {
            mp[x]++;

            if (mp[x] > 1) {
                v.push_back(x);
            }
        }

        int ans = 0;

        for (int i = 0; i < v.size(); i++) {
            ans ^= v[i];
        }
        return ans;
    }
};