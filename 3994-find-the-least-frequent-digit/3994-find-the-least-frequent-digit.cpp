class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> v;
        int dg = 0;
        while (n > 0) {
            dg = n % 10;
            v.push_back(dg);
            n = n / 10;
        }
        unordered_map<int, int> mp;

        for (auto x : v) {
            mp[x]++;
        }

        vector<int> v1;
        for (auto [key, val] : mp) {
            v1.push_back(val);
        }
        sort(v1.begin(), v1.end());
        int a = *min_element(v1.begin(), v1.end());

        vector<int> ans;

        for (auto [key, val] : mp) {
            if (val == a) {
                ans.push_back(key);
            }
        }

        int b = *min_element(ans.begin(), ans.end());

        return b;
    }
};