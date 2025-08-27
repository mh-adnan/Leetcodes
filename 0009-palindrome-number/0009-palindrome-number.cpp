class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);

        string val = s;
        reverse(val.begin(), val.end());
        return val == s;
    }
};