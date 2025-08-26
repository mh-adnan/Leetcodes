class Solution {
public:
    int maxSubArray(vector<int>& n) 
    {
     int ans=n[0];
     int sum=0;
     for(int i=0;i<n.size();i++)
     {
        sum=sum+n[i];
        ans = max(sum,ans);
        if(sum<0)
        {
            sum=0;
        }
     }
     return ans;   
    }
};