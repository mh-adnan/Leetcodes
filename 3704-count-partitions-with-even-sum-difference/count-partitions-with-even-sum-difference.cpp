class Solution {
public:
    int countPartitions(vector<int>& n) {
        vector<int> v;
        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < n.size(); i++) {
            sum = sum + n[i];
            v.push_back(sum);
        }

        for (int i = 0; i < v.size(); i++) {
            int m = v[i];
            int o = v[v.size() - 1];

            int q = o - m;

            int p = abs(m - q);
            if (p % 2 == 0) {
                cnt++;
            }
        }
        if (cnt > 0) {
            return cnt - 1;
        } else
            return cnt;
    }
};
