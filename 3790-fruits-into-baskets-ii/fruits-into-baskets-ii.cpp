class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) 
    {
        int n = f.size();
        int cnt = 0;

        for(int i=0;i<f.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(f[i]<=b[j])
                {
                    cnt++;
                    b.erase(b.begin()+j);
                    break;
                }
            }
        }
        return n-cnt;
    }
};