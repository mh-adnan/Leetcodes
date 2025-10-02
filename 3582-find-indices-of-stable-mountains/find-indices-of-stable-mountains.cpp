class Solution {
public:
    vector<int> stableMountains(vector<int>& h, int t) 
    {
      vector<int>ans;
      for(int i=0;i<h.size()-1;i++)
      {
        if(h[i]>t)
        {
            ans.push_back(i+1);
        }
      }    
      return ans;
    }
};