class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v1, v2;
        for (auto i : heights) {
            v1.push_back(i);
            v2.push_back(i);
        }
        sort(v1.begin(), v1.end());
        int cnt = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (v1[i] != v2[i]) {
                cnt++;
            }
        }
        return cnt;
    }
};