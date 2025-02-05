class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        int ans;
        while (k--) {
            int a = pq.top();
            pq.pop();
            ans = a;
        }
        return ans;
    }
};