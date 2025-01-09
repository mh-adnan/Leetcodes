class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        vector<int> v;
        for (auto it : nums) {
            v.push_back(it);
        }
        int sum = 0;
        int sum2 = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < nums.size(); i++) {
            if (v[i] <= 9) {
                sum += v[i];
            } else {
                sum2 += v[i];
            }
        }
        if (sum != sum2) {
            return true;
        } else {
            return false;
        }
    }
};