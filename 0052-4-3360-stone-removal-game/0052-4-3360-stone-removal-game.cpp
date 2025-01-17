class Solution {
public:
    bool canAliceWin(int n) {
        bool turn = false;
        int p = 10;
        while (n >= p) {
            n -= p;
            p -= 1;
            turn = !turn;
        }
        return turn;
    }
};