class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1, mp2;
        for (auto x : nums1) {
            mp1[x]++;
        }

        for (auto y : nums2) {
            mp2[y]++;
        }
        vector<int> ans;
        for (auto it : mp1) {
            int nn = it.first;
            if (mp2.find(nn) != mp2.end()) {
                ans.push_back(nn);
            }
        }
        return ans;
    }
};