class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream stream(sentence);
        string word;
        int cnt = 0;
        while (stream >> word) {
            if (word.find(searchWord) == 0) {
                return cnt + 1;
            }
            cnt++;
        }
        return -1;
    }
};