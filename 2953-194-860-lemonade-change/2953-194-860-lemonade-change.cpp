class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f = 0;
        int ten = 0;

        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                f++;
            } else if (bills[i] == 10) {
                if (f <= 0) {
                    return false;
                } else if (f >= 1) {
                    f--;
                }
                ten++;
            } else if (bills[i] == 20) {
                if (f > 0 && ten > 0) {
                    f--;
                    ten--;
                } else if (f >= 3) {
                    f = f - 3;
                } else
                    return false;
            }
        }
        return true;
    }
};