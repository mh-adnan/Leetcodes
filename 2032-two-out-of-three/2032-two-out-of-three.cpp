class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        set<int> s1, s2, s3;
        map<int, int> mp;
        for (auto x : nums1) {
            s1.insert(x);
        }

        for (auto x : nums2) {
            s2.insert(x);
        }

        for (auto x : nums3) {
            s3.insert(x);
        }

        for (auto it : s1) {
            mp[it]++;
        }

        for (auto it : s2) {
            mp[it]++;
        }

        for (auto it : s3) {
            mp[it]++;
        }

        vector<int> res;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second >= 2) {
                res.push_back(it->first);
            }
        }
        return res;
    }
};