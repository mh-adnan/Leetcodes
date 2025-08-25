class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans, v1, v2;

        for (int i = 0; i < m; i++) {
            ans.push_back(nums1[i]);
        }
        for (int j = 0; j < n; j++) {
            ans.push_back(nums2[j]);
        }
        sort(ans.begin(),ans.end());
        swap(ans,nums1);
    }
};