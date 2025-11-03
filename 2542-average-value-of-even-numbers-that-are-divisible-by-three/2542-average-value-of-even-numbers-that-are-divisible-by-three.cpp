class Solution {
public:
    int averageValue(vector<int>& nums) 
    {
      vector<int>v;
      int cnt =0;
      int sum=0;
      for(int i=0;i<nums.size();i++)
      {
        if(nums[i]%2==0 && nums[i]%3==0)
        {
            // v.push_back(nums[i]);
            sum+=nums[i];
            cnt++;
        }
      }  
       if (cnt==0)
       {
        return 0;
       }
      int k = round(sum/cnt);
      return k;
    

    }
};