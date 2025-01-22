class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        vector<int> v;
        int m = x;
        int sum = 0;
        while (x > 0) {
            int s = x % 10;
            sum = sum + s;
            x /= 10;
        }
        if (m % sum == 0) {
            return sum;
        } else
            return -1;
    }
};