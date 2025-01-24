class Solution {
public:
    int minimumCost(vector<int>& c) {

        vector<int> v, v1;
        int sum = 0;
        int sum2 = 0;
        sort(c.rbegin(), c.rend());
        for (int i = 0; i < c.size(); i++) {
            sum += c[i];
        }
        if (c.size() <= 2) {
            return sum;
        } else if (c.size() >= 3) {
            for (int i = 2; i < c.size(); i += 2) {
                sum2 += c[i];
                i++;
            }
            return sum - sum2;
            // return sum2;
        }
        return -1;
    }
};