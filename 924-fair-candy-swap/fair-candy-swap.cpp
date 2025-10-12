class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aa, vector<int>& bb) 
    {
        int sum =0;
        int sum2 =0;
        vector<int>ans;
        for(int i=0;i<aa.size();i++)
        {
            sum+=aa[i];
        }

        for(int i=0;i<bb.size();i++)
        {
            sum2+=bb[i];
        }
        
    
        for(int i=0;i<aa.size();i++)
        {
            for(int j=0;j<bb.size();j++)
            {
                int newA = sum - aa[i] + bb[j];
                int newB = sum2 - bb[j] + aa[i];

               
                if (newA == newB)
                {
                    return {aa[i], bb[j]};
                }
            }
        }
        return {};
    }
};