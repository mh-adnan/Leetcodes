class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        vector<int> a;
        for (auto x : s) {
            a.push_back(x);
        }
        swap(a, nums);

        return s.size();
    }
};