class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq(s.begin(), s.end());

        while (pq.size() > 1) {
            int a = pq.top();
            pq.pop();

            int b = pq.top();
            pq.pop();

            if (a != b) {
                pq.push(a - b);
            }
        }
        if (pq.size() == 0) {
            return 0;
        } else
            return pq.top();
    }
};