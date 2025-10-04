class Solution {
public:
    bool isArraySpecial(vector<int>& n)
    {
        int k =0;
         for(int i=0;i<n.size()-1;i++)
        {
            if( (n[i]%2==0 && n[i+1]%2==0)  ||  ((n[i]%2!=0 && n[i+1]%2!=0) ))
            {
                return false;
            }
        }
        return true;
    }
};