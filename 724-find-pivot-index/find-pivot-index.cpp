class Solution {
public:
    int pivotIndex(vector<int>& n) {
        int sum = 0;
        int left = 0;

        for (int i = 0; i < n.size(); i++) {
            sum += n[i];
        }
        for (int i = 0; i < n.size(); i++) {
            int right = sum - left - n[i];
            if (right == left) {
                return i;
            }
            left += n[i];
        }

        return -1;
    }
};