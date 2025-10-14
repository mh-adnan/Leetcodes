class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
      int n = arr.size();
      vector<int> sum (n+1);

      for(int i=1;i<=n;i++)
      {
        sum[i]= sum[i-1]+arr[i-1];
      } 


    int ans=0;

      for(int i=1;i<=n;i+=2)
      {
        for(int j=i;j<=n;j++)
        {
            ans+=sum[j]- sum[j-i];
        }
      }
      return ans;
    }
};