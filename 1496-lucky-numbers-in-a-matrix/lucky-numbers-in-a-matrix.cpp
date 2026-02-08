class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> row;
        vector<int> col;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int minu = INT_MAX;
            for (int j = 0; j < m; j++) {
                minu = min(minu, mat[i][j]);
            }
            row.push_back(minu);
        }

        for (int j = 0; j < m; j++) {
            int maxu = INT_MIN;
            for (int i = 0; i < n; i++) {
                maxu = max(maxu, mat[i][j]);
            }
            col.push_back(maxu);
        }

        for (int i = 0; i < row.size(); i++) {
            for (int j = 0; j < col.size(); j++) {
                if (row[i] == col[j]) {
                    ans.push_back(row[i]);
                    break;
                }
            }
        }
        return ans;
    }
};