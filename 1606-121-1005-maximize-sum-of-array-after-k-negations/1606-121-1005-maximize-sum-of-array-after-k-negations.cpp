class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());

        while (k--) {
            int mini = pq.top();
            pq.pop();
            mini *= -1;
            pq.push(mini);
        }

        int sum = 0;
        while (!pq.empty()) {
            int a = pq.top();
            sum += a;
            pq.pop();
        }
        return sum;
    }
};