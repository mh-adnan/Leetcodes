class Solution {
public:
    int absDifference(vector<int>& n, int k) {
        sort(n.begin(), n.end());

        int s = 0;
        int m = 0;

        for (int i = 0; i < k; i++) {
            m += n[i];
        }
        int cnt = 0;
        for (int i = n.size() - 1; i >= 0; i--) {
            s += n[i];
            cnt++;
            if (cnt == k) {
                break;
            }
        }
        return abs(s - m);
    }
};