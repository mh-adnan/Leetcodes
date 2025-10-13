class Solution {
public:
    int getMinDistance(vector<int>& nums, int t, int s) 
    {
        int a,i;
        vector<int>ans;
        for( i=0;i<nums.size();i++)
        {
            if(nums[i]==t)
            {
              int a = i;
              int k = abs(a-s); 
              ans.push_back(k);
           
            }
        }
        int kk =  *min_element(ans.begin(),ans.end());
        return kk;
    }
};