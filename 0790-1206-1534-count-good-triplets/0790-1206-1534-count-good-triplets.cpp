class Solution {
public:
    int countGoodTriplets(vector<int>& n, int a, int b, int c) {
        int cnt = 0;

        for (int i = 0; i < n.size(); i++) {
            for (int j = i + 1; j < n.size(); j++) {
                for (int k = j + 1; k < n.size(); k++) {
                    int p = abs(n[i] - n[j]);
                    int q = abs(n[j] - n[k]);
                    int r = abs(n[i] - n[k]);

                    if (p <= a && q <= b && r <= c) {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};