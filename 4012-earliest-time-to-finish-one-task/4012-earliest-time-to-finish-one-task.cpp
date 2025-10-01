class Solution {
public:
    int earliestTime(vector<vector<int>>& t) 
    {
        vector<int>ans;
        int sum=0;
        for(int i=0;i<t.size();i++)
        {
            for(int j=0;j<t[i].size();j++)
            {
                sum+=t[i][j];
            }
            ans.push_back(sum);
            sum=0;
        }
        int k = *min_element(ans.begin(),ans.end());
        return k;
    }
};