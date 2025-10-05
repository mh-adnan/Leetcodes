class Solution {
public:
    int returnToBoundaryCount(vector<int>& n) 
    {
        int sum=0;
        int cnt=0;
        for(int i=0;i<n.size();i++)
        {
            sum+=n[i];
            if(sum==0)
            {
                cnt++;
            }
        }

       
        return cnt;
    }
};