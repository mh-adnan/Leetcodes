class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) 
    {
        
     sort(nums.begin(),nums.end());
 

     if(nums.size()<=0 || k==1)
     {
        return 0;
     }

     int ans = INT_MAX;
    
     for(int i=0;i<=nums.size()-k;i++)
     {
        int pp = nums[i+k-1]  - nums[i];
        ans = min(ans,pp);
     }
    return ans;
        
    }
};