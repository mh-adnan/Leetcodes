class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int ans;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] != nums2[i]) {
                    ans = (nums1[i] - nums2[i]) * -1;
                } else if (nums1[i] == nums2[i]) {
                    ans = (nums1[i] - nums2[i]);
                }
                break;
            }
        }
        return ans;
    }
};