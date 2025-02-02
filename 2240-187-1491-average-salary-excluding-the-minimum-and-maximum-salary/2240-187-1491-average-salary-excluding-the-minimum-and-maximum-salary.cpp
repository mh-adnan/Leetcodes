class Solution {
public:
    double average(vector<int>& s) {
        double sum = 0;
        for (auto it : s) {
            sum += it;
        }
        sort(s.begin(), s.end());
        int n = s.size();
        double cut = 0;
        for (int i = 0; i < n; i++) {

            cut += s[0];
            cut += s[n-1];
            break;
        }
        double k = sum - cut;
        int p = s.size() - 2;
        return double(k / p);
    }
};