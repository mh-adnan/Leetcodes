class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1(nums1.begin(), nums1.end());
        set<int> st2(nums2.begin(), nums2.end());
        map<int, int> mp;
        for (auto it : st1) {
            mp[it]++;
        }
        for (auto it : st2) {
            mp[it]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second >= 2) {
                return it->first;
            }
        }
        return -1;
    }
};