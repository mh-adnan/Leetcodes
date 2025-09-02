class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
      int cnt =0;
      int n = nums.size();
      set<int>p;
    //   for(int i=n-1;i>0;i--)
    while(!nums.empty())
      {
        int a = nums.back();
        cnt++;
        if(a<=k)
        {
            p.insert(a);
            if(p.size()==k)
            {
                return cnt;
            }
        }
       nums.pop_back();
     }
     return -12;
    }
};