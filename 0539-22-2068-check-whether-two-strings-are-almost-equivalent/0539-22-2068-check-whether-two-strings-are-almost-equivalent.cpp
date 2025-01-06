class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char, int> mp1, mp2;
        for (auto it : word1) {
            mp1[it]++;
        }

        for (auto it : word2) {
            mp2[it]++;
        }
        for (int c = 'a'; c <= 'z'; c++) {
            int k = mp1[c];
            int kk = mp2[c];

            if (abs(k - kk) > 3) {
                return false;
            }
        }
        return true;
    }
};