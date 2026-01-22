class Solution {
public:
    int gcdOfOddEvenSums(int n) 
    {
      int a = n*n;
      int b = n*(1+n);

      return __gcd(a,b);

    }
};