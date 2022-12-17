class Solution {
public:
    bool isValid(string _s) {
        stack<char> s;
        for(char c: _s) {
            if (c == '(' || c == '{' || c == '[') 
                s.push(c);
            else {
                if (s.empty()) return false;

                char d = s.top(); s.pop();
                string e = string(1, d) + string(1, c);
                
                if (e == "()") continue;
                else if (e == "{}") continue;
                else if (e == "[]") continue;
                else return false;
            }
        }
        return s.empty();
    }
};
