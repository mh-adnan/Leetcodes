class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& snd) {
        int totStu1 = 0;
        int p = 0;

        deque<int> dqst;
        deque<int> dqsnd;

        dqst.insert(dqst.end(), st.begin(), st.end());
        dqsnd.insert(dqsnd.end(), snd.begin(), snd.end());

        for (int i = 0; i < st.size(); i++) 
        {
            if (st[i] == 1) {
                totStu1 += 1;
            }
        }

        int cnt=0;

       while (!dqst.empty() && !dqsnd.empty()) 
        {
            int a = dqst.front();
            int b = dqsnd.front();

            if(a==b)
            {
                dqst.pop_front();
                dqsnd.pop_front();
                cnt=0;
            }

            else if(a!=b)
            {
                
                dqst.pop_front();
                dqst.push_back(a);
                cnt++;
            }
            if(cnt== dqst.size())
            {
                break;
            }
        }
        return dqst.size();
    }
};