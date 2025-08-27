class Solution {
public:
    bool isPalindrome(string s) 
    {
        string ans;
        for (int i = 0; i < s.size(); i++) 
        {
            char a = s[i];
            if (isalnum(a)) 
            {
                ans += tolower(a);
            }
        }
        string n1 = ans;
        reverse(ans.begin(), ans.end());
        return n1 == ans;
    }
};