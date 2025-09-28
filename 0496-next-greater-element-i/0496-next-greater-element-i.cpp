class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        vector<int> ans;
        for (int i = 0; i < n1.size(); i++) 
        {
            bool p = false;
            for (int j = 0; j < n2.size(); j++) 
            {
                if (n1[i] == n2[j]) 
                {
                    for (int k = j + 1; k < n2.size(); k++) 
                    {
                        if (n2[k] > n1[i]) 
                        {
                            ans.push_back(n2[k]);
                            p = true;
                            break;
                        }
                    }
                   break;
                } 
            }
            if(!p) ans.push_back(-1);
        }
        return ans;
    }
};