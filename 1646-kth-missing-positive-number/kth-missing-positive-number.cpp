class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int n[10001]={0};
        vector<int>ans;

        for(auto x: arr)
        {
            if(x>=1 && x <=1001)
            {
                n[x]=1;
            }
        }
        for(int i=1;i<=10000;i++)
        {
            if(n[i]==0)
            {
                k--;
                if (k == 0) return i;
            }
        }
        return -1;

    }
};