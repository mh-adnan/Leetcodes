class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& arr) {
        int cnt = 0;
         sort(t.begin(), t.end());
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            if (t[i] != arr[i]) {
                return false;
            }
        }
        return true;
    }
};