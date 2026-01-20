class Solution {
public:
    string winningPlayer(int x, int y) {
        int a = 0;
        int b = 0;
        while (x >= 1 && y >= 4) {
            x = x - 1;
            y = y - 4;
            a++;

            if (x <= 0 || y <= 3) {
                break;
            }
            x = x - 1;
            y = y - 4;
            b++;
        }

        if (a > b) {
            return "Alice";
        } else
            return "Bob";
    }
};