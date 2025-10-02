class Solution {
public:
    int countMatches(vector<vector<string>>& itm, string rk, string rv) {
        int ans = 0;
        int k;
        if (rk == "type") {
            k = 0;
        }

        else if (rk == "color") {
            k = 1;
        }

        else if (rk == "name") {
            k = 2;
        }
        for (int i = 0; i < itm.size(); i++) {

            if (itm[i][k] == rv) {
                ans++;
            }
        }
        return ans;
    }
};
