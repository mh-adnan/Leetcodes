class Solution {
public:
    int dayOfYear(string d) {
        string yr = d.substr(0, 4);
        int yrr = stoi(yr);

        string mm = d.substr(5, 8);
        int mmm = stoi(mm);

        string dd = d.substr(8, 10);
        int ddd = stoi(dd);

        vector<int> monat = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int sum = 0;

        if ((yrr % 4 == 0 && yrr % 100 != 0) || (yrr % 400 == 0)) {
            monat[2] = 29;
        }

        for (int i = 1; i < mmm; i++) {
            sum += monat[i];
        }

        return sum + ddd;
    }
};