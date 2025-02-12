class Solution {
public:
    int countOdds(int l, int h) {
        if(l==h && l%2!=0)
        {
            return 1;
        }

       else  if(l==h && l%2==0)
        {
            return 0;
        }
        if (l % 2 == 0 && h % 2 == 0) {
            return abs(l - h) / 2;
        }

        else if (l % 2 != 0 && h % 2 != 0) {
            int a = l + 1;
            int b = h - 1;
            return abs((a - b) / 2) + 2;
        }

        else if (l % 2 == 0 && h % 2 != 0) {
            int a = l;
            int b = h - 1;
            return abs((a - b) / 2) + 1;
        }

        else if (l % 2 != 0 && h % 2 == 0) {
            int a = l + 1;
            int b = h;
            return abs((a - b) / 2) + 1;
        }

        return -1;
    }
};