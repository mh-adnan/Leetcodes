class Solution {
public:
    int totalNumbers(vector<int>& d) {
        set<int> a;
        for (int i = 0; i < d.size(); i++) {
            for (int j = 0; j < d.size(); j++) {
                for (int k = 0; k < d.size(); k++) {
                    if (i == j || j == k || i == k)
                        continue;
                    int num = d[i] * 100 + d[j] * 10 + d[k];
                   
                    if (d[i] != 0 && num % 2 == 0) {
                        a.insert(num);
                    }
                }
            }
        }
        return a.size();
    }
};