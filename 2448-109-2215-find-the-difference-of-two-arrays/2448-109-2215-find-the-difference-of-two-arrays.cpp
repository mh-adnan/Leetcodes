class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> v1, v2;
        for (auto it : s1) {
            if (s2.find(it) == s2.end()) {
                v1.push_back(it);
            }
        }
        for (auto it : s2) {
            if (s1.find(it) == s1.end()) {
                v2.push_back(it);
            }
        }
        return {v1, v2};
    }
};