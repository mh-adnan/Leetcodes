class Solution {
public:
    int climbStairs(int n) 
    {
      if(n==1)
      {
        return 1;
      } 
      if (n==2)
      return 2;

     else{
        int a=1;
        int b=2;
        int fib;
        
        for(int i=3;i<=n;i++)
        {
             fib = a+b;
             a=b;
             b=fib;
        }
        return fib;
     }
    }
};