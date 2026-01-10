class Solution {
public:
    int passThePillow(int n, int time) {
        vector<int> v;
        int ans;
        int cnt = 0;

        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }

        for (int i = n - 1; i >= 2; i--) {
            v.push_back(i);
        }

        int k = v.size();     
        time = time % k;       

        return v[time];
    }
    
};