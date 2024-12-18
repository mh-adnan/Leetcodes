class Solution {
public:
    int lengthOfLastWord(string s) 
    {
     int cnt=0;
     reverse(s.begin(),s.end());
     int i =0;
     while(i<s.size() && s[i]==' ')
     {
        i++;
     }
     while(i<s.size() && s[i]!=' ')
     {
       cnt++;
       i++;
     } 
     return cnt;
    }
};