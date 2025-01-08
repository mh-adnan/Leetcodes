class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s(candyType.begin(), candyType.end());
        int ss = s.size();
        int sz = candyType.size() / 2;
        int minn = min(sz, ss);
        return minn;
    }
};