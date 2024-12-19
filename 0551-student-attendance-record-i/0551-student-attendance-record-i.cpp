class Solution {
public:
    bool checkRecord(string s) {
        int late = 0;
        int ab = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                ab++;
                if (ab >= 2) {
                    return false;
                }
            }
            if (s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L') {
                return false;
            }
        }
        return true;
    }
};