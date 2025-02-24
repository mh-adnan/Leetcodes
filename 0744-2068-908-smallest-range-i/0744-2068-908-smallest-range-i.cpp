class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k)
    {
      if(nums.size()==1)
      {
        return 0;
      }    
      int mini = *min_element(nums.begin(),nums.end());
      int maxi = *max_element(nums.begin(),nums.end());
      int neww = mini+k;
      int kk = maxi -neww;

      if(kk<k)
      {
        return 0;
      }
      else return kk-k;
    }
};