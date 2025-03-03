class Solution {
public:
    long long coloredCells(int n) {
        long long int b, c = 0, d = 1, k = 0;
        if (n == 1) {
            return 1;
        } else if (n >= 2) {
            while (c != (n - 1)) {
                k += d;
                d += 2;
                c++;
            }
            b = (k * 2) + (n + (n - 1));
        }

        return b;
    }
};