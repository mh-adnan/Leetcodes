class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
       int ans=0;
       int k = *max_element(nums.begin(),nums.end());    

        for(int i=0;i<nums.size();i++)
        {
            int a = abs(nums[i]-k);
            ans+=a;
        }
        return ans;
    }
};