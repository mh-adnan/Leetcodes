class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int nn = n;
            int pro = 1;
            while (nn > 0) {
                int d = nn % 10;
                pro *= d;
                nn = nn / 10;
            }
            if (pro % t == 0) {
                return n;
            } else
                n++;
        }
    }
};