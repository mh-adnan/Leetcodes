class Solution {
public:
    long long coloredCells(long long int n) {
        long long int k = n - 1;
        return n * n + (k * k);
    }
};