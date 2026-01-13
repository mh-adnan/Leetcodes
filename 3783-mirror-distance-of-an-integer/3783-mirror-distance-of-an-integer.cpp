class Solution {
public:
    int mirrorDistance(int n) 
    {
      int a = n;
      string b = to_string(n);
      reverse(b.begin(),b.end());
      int c = stoi(b);

      return abs(a-c);    
    }
};