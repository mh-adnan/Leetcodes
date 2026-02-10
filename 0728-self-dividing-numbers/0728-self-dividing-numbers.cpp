class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) 
    {
        vector<int> ans;
        
        for (int i = l; i <= r; i++) 
        {
            int k = i;
            bool ok= true;
            
            while (k > 0) 
            {
                int digi = k %10;
                k = k / 10;

                if( digi ==0 || (i % digi) !=0 )
                {
                    ok = false;
                   
                    break;
                   
                }
            }
            if(ok)
            {
                ans.push_back(i);
            }
            
        }
        return ans;
    }
};
   