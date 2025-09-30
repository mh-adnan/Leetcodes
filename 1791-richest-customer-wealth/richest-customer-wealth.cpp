class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        vector<int> ans;

        for (int i = 0; i < a.size(); i++) {
            int sum = 0;
            for (int j = 0; j < a[i].size(); j++) {

                sum += a[i][j];
            }
            ans.push_back(sum);
            sum = 0;
        }
        int k = *max_element(ans.begin(), ans.end());
        return k;
    }
};