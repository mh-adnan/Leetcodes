class Solution {
public:
    int distributeCandies(int n, int l) {
        int cnt = 0;
        for (int a = 0; a <= l; a++) {
            for (int b = 0; b <= l; b++) {
                for (int c = 0; c <= l; c++) {
                    if (a + b + c == n) {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};