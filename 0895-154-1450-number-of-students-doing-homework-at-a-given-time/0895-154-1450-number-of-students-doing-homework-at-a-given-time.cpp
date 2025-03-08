class Solution {
public:
    int busyStudent(vector<int>& st, vector<int>& et, int qt) {
        int cnt = 0;
        for (int i = 0; i < st.size(); i++) {
            int b = st[i];
            int c = et[i];

            if (b <= qt && c >= qt) {
                cnt++;
            }
        }
        return cnt;
    }
};