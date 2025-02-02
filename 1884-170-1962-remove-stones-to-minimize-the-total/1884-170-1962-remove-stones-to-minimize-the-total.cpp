class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        priority_queue<int> pq(p.begin(), p.end());
        vector<int> v;
        while (k--) {
            int a = pq.top();
            pq.pop();
            int b = floor(a / 2);
            int c = a - b;
            pq.push(c);
        }
        int sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};