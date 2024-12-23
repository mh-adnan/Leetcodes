class Solution {
public:
    int arrangeCoins(int n) 
    {
        long long  int k = 0;
        for(int i=1;i<=n;i++)
        {
            k +=i;
           
            if(k==n)
            {
              return i;
            }
            else{ if (k>n)
                return i-1;
            }
        }
        return -1;
    }
};