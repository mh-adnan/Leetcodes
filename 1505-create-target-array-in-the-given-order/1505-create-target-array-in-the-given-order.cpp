class Solution {
public:
    vector<int> createTargetArray(vector<int>& n, vector<int>& inx) {
        vector<int> ans;
        deque<int> dq;

        for (int x : n) {
            dq.push_back(x);
        }

        for (int i = 0; i < inx.size(); i++) {
            int p = dq.front();
            ans.insert(ans.begin() + inx[i], p);
            dq.pop_front();
        }

        return ans;
    }
};