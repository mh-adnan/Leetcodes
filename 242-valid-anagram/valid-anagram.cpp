class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> x, y;
        for (int a : s) {
            x[a]++;
        }

        for (int b : t) {
            y[b]++;
        }

        for(int i=0;i<x.size();i++)
        {
            if(x!=y)
            {
                return false;
            }
        }
        return true;
    }
};