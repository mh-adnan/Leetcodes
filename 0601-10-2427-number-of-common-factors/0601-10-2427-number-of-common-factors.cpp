class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt = 0;

        int mini = min(a, b);

        for (int i = 1; i <= mini; i++) {
            if (a % i == 0 && b % i == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};