class Solution {
public:
    bool isPrime(int x) {
        if (x < 2)
            return false;
        if (x == 2)
            return true;
        if (x % 2 == 0)
            return false;
        for (int i = 3; i * i <= x; i += 2) {
            if (x % i == 0)
                return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& n) {
        vector<int> ans;
        int sz = n.size();
        for (int i = 0; i < sz; i++) {
            int k = n[i][i];
            bool kIsPrime = isPrime(k);
            if (kIsPrime == true) {
                ans.push_back(k);
            }

            int p = n[i][sz - i - 1];
            bool pIsPrime = isPrime(p);
            if (pIsPrime == true) {
                ans.push_back(p);
            }
        }
        if (ans.empty())
            return 0;
        int o = *max_element(ans.begin(), ans.end());
        return o;
    }
};