class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum = 0;
        int k = 0;
        for (int i = 1; i <= k; i += 2) {
            sum += i;
            k++;
            if (k == n) {
                break;
            }
        }
        int o = sum + n;
        int m = __gcd(sum, o);
        return m;
    }
};