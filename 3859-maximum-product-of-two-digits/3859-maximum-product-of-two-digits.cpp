class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        int val =n;
     
        while (n > 0) {
            val = n % 10;
            ans.push_back(val);
            n /= 10;
        }

        sort(ans.rbegin(), ans.rend());
        int p;

        for (int i = 0; i < ans.size(); i++) {
            p = ans[i] * ans[i + 1];
            break;
        }
        return p;
    }
};