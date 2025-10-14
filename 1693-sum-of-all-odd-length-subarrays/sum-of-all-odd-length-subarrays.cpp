class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& n) 
    {
     int sum=0;
     
  
     for(int i=0;i<n.size();i++)
     {
        for(int j=i;j<n.size();j+=2)
        {
            for(int k=i;k<=j;k++)
            {
                sum+=n[k];
            }
        }
     }
     return sum;
    }
};