class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;
        int sum = 0;
        int a;
        for (int i = 0; i < op.size(); i++) {

            if (op[i] != "C" && op[i] != "D" && op[i] != "+") {
                a = stoi(op[i]);
                st.push(a);
            } else if (op[i] == "C" && !st.empty()) {
                st.pop();
            }

            else if (op[i] == "D" && !st.empty()) {
                int b = st.top();
                int c = b * 2;
                st.push(c);
            }

            else if (op[i] == "+" && st.size() >= 2) {
                int d = st.top();
                st.pop();
                int e = st.top();
                int f = d + e;
                st.push(d);
                st.push(f);
            }
        }

        while (!st.empty()) {
            int k = st.top();
            sum += k;
            st.pop();
        }
        return sum;
    }
};