class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& n) {
        int tot = 0;
        for (int i = 0; i < n.size(); i++) {
            tot += n[i];
        }
        if (tot % 3 != 0) {
            return false;
        }
        int sum = 0;
        int cnt = 0;
        int p = tot / 3;

        for (int i = 0; i < n.size(); i++) {
            sum += n[i];
            if (sum == p) {
                cnt++;
                sum = 0;
            }
        }
        if (cnt >= 3) {
            return true;
        } else
            return false;
    }
};