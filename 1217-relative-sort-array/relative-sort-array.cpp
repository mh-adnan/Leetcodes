class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a1, vector<int>& a2) {

        vector<int> ans;
        sort(a1.begin(), a1.end());

        for (int i = 0; i < a2.size(); i++) {
            for (int j = 0; j < a1.size(); j++) {
                if (a2[i] == a1[j]) {
                    ans.push_back(a1[j]);
                    a1.erase(a1.begin() + j);
                    j--;
                }
            }
        }
        for (int i = 0; i < a1.size(); i++) {
            ans.push_back(a1[i]);
        }
        return ans;
    }
};