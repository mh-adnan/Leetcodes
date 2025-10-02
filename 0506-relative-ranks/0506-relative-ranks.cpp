class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& s) {
        vector<int> cp;
        cp = s;
        vector<string> ans;

        sort(cp.rbegin(), cp.rend());

        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < cp.size(); j++) {
                if (s[i] == cp[j]) {
                    if (j == 0) {
                        ans.push_back("Gold Medal");
                    }

                    else if (j == 1) {
                        ans.push_back("Silver Medal");
                    }

                    else if (j == 2) {
                        ans.push_back("Bronze Medal");
                    } else {
                        string ss = to_string(j + 1);
                        ans.push_back(ss);
                    }
                }
            }
        }
        return ans;
    }
};