class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        vector<string> ans;
        string pp = "";
        for (int i = 0; i < words.size(); i++) {
            string ww = words[i];
            string c = ww;

            reverse(c.begin(), c.end());
            if (ww == c) {

                pp = ww;
                break;
            }
        }
        return pp;
    }
};