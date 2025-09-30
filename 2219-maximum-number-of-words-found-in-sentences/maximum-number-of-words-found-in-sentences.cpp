class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int maxii = 0;
        for(int i=0;i<s.size();i++)
        {
            stringstream ss (s[i]);
            string w;
            int cnt=0;
            while(ss>>w)
            {
                cnt++;
            }
            maxii = max(maxii,cnt);

        }
        return maxii;
    }
};