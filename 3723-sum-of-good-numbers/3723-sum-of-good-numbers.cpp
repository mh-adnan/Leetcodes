class Solution {
public:
    int sumOfGoodNumbers(vector<int>& n, int k) {
        vector<int> ans;

        int sum = 0;

        for (int i = 0; i < n.size(); i++) {
            bool p = true;
            if (i - k >= 0 && n[i] <= n[i - k]) {
                p = false;
            }

            if (i + k < n.size() && n[i] <= n[i + k]) {
                p = false;
            }

            if (p == true) {
                sum += n[i];
            }
        }
        return sum;
    }
};
