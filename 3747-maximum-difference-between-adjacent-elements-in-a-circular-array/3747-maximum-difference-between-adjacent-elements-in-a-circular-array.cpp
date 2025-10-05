class Solution {
public:
    int maxAdjacentDistance(vector<int>& n) {
        vector<int> ans;

        int last = n.back();
        n.insert(n.begin(), last);
        for (int i = 0; i < n.size() - 1; i++) {
            int p;
            p = abs(n[i] - n[i + 1]);
            ans.push_back(p);
        }

        int m = *max_element(ans.begin(), ans.end());
        return m;
    }
};