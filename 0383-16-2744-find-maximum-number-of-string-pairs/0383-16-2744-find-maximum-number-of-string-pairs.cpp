class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            string k = words[i];
            reverse(k.begin(), k.end());
            for (int j = i + 1; j < words.size(); j++) {
                if (k == words[j]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};