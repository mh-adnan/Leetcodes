class Solution {
public:
    int smallestIndex(vector<int>& n) {
        vector<int> ans;
        int sum = 0;
        for (int i = 0; i < n.size(); i++) {
            int a = n[i];
            if (a > 9) {
                while (a > 0) {
                    sum += a % 10;
                    a = a / 10;
                }
                ans.push_back(sum);
                sum=0;
            } else if (a <= 9) {
                ans.push_back(a);
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == i) {
                return ans[i];
            }
        }
        return -1;
    }
};