class Solution {
public:
    vector<int> decrypt(vector<int>& c, int k) {
        int n = c.size();
        vector<int> ans;

        if (k == 0) {
            for (int i = 0; i < c.size(); i++) {
                ans.push_back(0);
            }
        }

        if (k > 0) {
            c.insert(c.end(), c.begin(), c.end());
            for (int i = 0; i < c.size(); i++) {
                int sum = 0;
                for (int j = i + 1; j <= i + k; j++) {
                    sum += +c[j];
                }
                ans.push_back(sum);
                n--;
                if (n == 0) {
                    break;
                }
            }
        }
        // for k<0
        if (k < 0) {
            c.insert(c.begin(), c.begin(), c.end());
            for (int i = c.size() / 2; i <= c.size(); i++) {
                int sum = 0;
                for (int j = i - 1; j >= i + k; j--) {
                    sum += +c[j];
                }
                ans.push_back(sum);
                n--;
                if (n == 0) {
                    break;
                }
            }
        }

        return ans;
    }
};