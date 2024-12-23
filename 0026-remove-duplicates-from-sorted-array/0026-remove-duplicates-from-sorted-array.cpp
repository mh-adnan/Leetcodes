class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for (auto i : nums) {
            s.insert(i);
        }
        nums.clear();
        for (auto a : s) {
            nums.push_back(a);
        }
        return nums.size();
    }
};