class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& snd) {

        deque<int> dqst;
        deque<int> dqsnd;

        dqst.insert(dqst.end(), st.begin(), st.end());
        dqsnd.insert(dqsnd.end(), snd.begin(), snd.end());

        int cnt = 0;

        while (!dqst.empty() && !dqsnd.empty()) {
            int a = dqst.front();
            int b = dqsnd.front();

            if (a == b) {
                dqst.pop_front();
                dqsnd.pop_front();
                cnt = 0;
            }

            else if (a != b) {

                dqst.pop_front();
                dqst.push_back(a);
                cnt++;
            }
            if (cnt == dqst.size()) {
                break;
            }
        }
        return dqst.size();
    }
};