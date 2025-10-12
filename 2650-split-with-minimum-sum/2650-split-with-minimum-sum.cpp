class Solution {
public:
    int splitNum(int n) {
        vector<int> ans;
        int d = 0;
        while (n > 0) {
            d = n % 10;
            ans.push_back(d);
            n = n / 10;
        }

        sort(ans.begin(), ans.end());
        int s =0;
        int s1 =0;

        for(int i=0;i<ans.size();i++)
        {
            if(i%2==0)
            {
                s=s*10+ans[i];
            }
           else if(i%2!=0)
            {
                s1=s1*10+ans[i];
            }
        }

        return s+s1;
    }
};

