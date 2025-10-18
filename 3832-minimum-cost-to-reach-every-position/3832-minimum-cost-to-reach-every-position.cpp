class Solution {
public:
    vector<int> minCosts(vector<int>& c) 
    {
        int minu = c[0];
        vector<int>ans;

        for(int i=0;i<c.size();i++)
        {
            int a= min(minu,c[i]);
            minu = a;
            ans.push_back(a);
        }
        return ans;
    }
};