class Solution {
public:
    bool isAnagram(string s, string t) 
    {
    vector<char>v1,v2;
    for(int i=0;i<s.size();i++)
    {
        char a = s[i];
        v1.push_back(a);
    }

     for(int i=0;i<t.size();i++)
    {
        char a = t[i];
        v2.push_back(a);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    if(v1==v2)
    {
        return true;
    }
    else return false;

    }
};