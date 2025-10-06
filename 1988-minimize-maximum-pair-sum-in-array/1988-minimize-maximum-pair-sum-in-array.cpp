class Solution {
public:
    int minPairSum(vector<int>& n) {
        deque<int> dq;
        sort(n.begin(), n.end());

        for (int x : n) {
            dq.push_back(x);
        }
        vector<int> ans;
        while (!dq.empty()) {
            int a = dq.front();
            int b = dq.back();
            int c = a + b;
            ans.push_back(c);
            dq.pop_front();
            dq.pop_back();
        }
        int d = *max_element(ans.begin(), ans.end());
        return d;
    }
};