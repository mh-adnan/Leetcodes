class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        vector<int> ans;

        for (int n : nums) {
            if (n < 10) {
                ans.push_back(n);
            }
            else if (n <= 99) {
                int a = n % 10;
                int b = n / 10;
                int c = max(a, b);
                ans.push_back(c + c * 10);
            }
            else if (n <= 999) {
                int a = n % 10;
                n /= 10;
                int b = n % 10;
                n /= 10;
                int c = n;
                int m = max({a, b, c});
                ans.push_back(m + m * 10 + m * 100);
            }
            else if (n == 1000) {
                ans.push_back(1111);
            }
        }

        int sum = 0;
        for (int x : ans) sum += x;
        return sum;
    }
};
