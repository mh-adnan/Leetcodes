class Solution {
public:
    int countTriples(int n) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                for (int k = 1; k <= n; k++) {
                    int m = i * i;
                    int n = j * j;
                    int o = k * k;

                    if (m + n == o)

                    {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};