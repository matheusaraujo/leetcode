class Solution {
private:
    bool isDigit(char c) {
        return c >= '0' && c <= '9';
    }
public:
    int calculate(string s) {
        int len = s.length();
        if (len == 0) return 0;   

        stack<int> st;
        int cn = 0;
        char co = '+';

        for(int i = 0; i < len; i++) {
            char cc = s[i];
            if (isDigit(cc)) cn = cn * 10 + (cc-'0');
            if (!isDigit(cc) && cc != ' ' || i == len-1) {
                if (co == '-') st.push(-cn);
                else if (co == '+') st.push(cn);
                else if (co == '*') {
                    int t = st.top(); st.pop();
                    st.push(t * cn);
                } else if (co == '/') {
                    int t = st.top(); st.pop();
                    st.push(t / cn);
                }
                co = cc, cn = 0;
            }
        }

        int r = 0;
        while(!st.empty()) {
            r += st.top(); 
            st.pop();
        }

        return r;
    }
};
