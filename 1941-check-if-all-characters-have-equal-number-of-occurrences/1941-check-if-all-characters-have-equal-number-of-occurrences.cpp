class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        map<char,int>mp;
        set<int>st;

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for (auto it=mp.begin();it!=mp.end();it++)
        {
            st.insert(it->second);
        }
        if(st.size()==1){
            return true;
        }
        return false;
    }
};