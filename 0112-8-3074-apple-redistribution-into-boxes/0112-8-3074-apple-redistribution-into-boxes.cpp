class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        int sum = 0;
        int sum2 = 0;
        int cnt = 0;

        for (auto it : a) {
            sum += it;
        }
        sort(c.rbegin(), c.rend());

        for (int i = 0; i < c.size(); i++) {
            sum2 += c[i];
            cnt++;
            if (sum2 >= sum) {
                break;
            }
        }
        return cnt;
    }
};