class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) 
    {
        vector<int>v;
        for(int i =0;i<n.size()-1;i++)
        {
            for(int j=i+1;j<n.size();j++)
            {
                if(n[i]+n[j]==t)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
    }
};