class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int p = word2.size();
        string ans;
        int i = 0;
        int j = 0;
        int cnt = 0;
        int flag = 0;

        while (cnt != (n + p)) {
            if (flag == 0) {
                if (i < n) {
                    ans += word1[i];
                    i++;
                    cnt++;
                    flag = 1;
                } else if (i >= n) {
                    flag = 1;
                }
            } else if (flag == 1) {
                if (j < p) {
                    ans += word2[j];
                    j++;
                    cnt++;
                    flag = 0;
                } else if (j == p) {
                    flag = 0;
                }
            }
        }
        return ans;
    }
};
