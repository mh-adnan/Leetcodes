class Solution {
public:
    vector<int> findMissingElements(vector<int>& n) {
        vector<int> v;

        sort(n.begin(), n.end());
        int mini = *min_element(n.begin(), n.end());
        int maxi = *max_element(n.begin(), n.end());

        for (int i = mini; i <= maxi; i++) {
            if (find(n.begin(), n.end(), i) == n.end()) {
                v.push_back(i);
            }
        }

        return v;
    }
};