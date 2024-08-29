class Solution {
private: 
    long long int pop(stack<long long int>& s) {
        long long int t = s.top();
        s.pop();
        return t;
    }
public:
    int evalRPN(vector<string>& t) {
        stack<long long int> s;
        for(string c : t) {
            if (c == "+") s.push(pop(s) + pop(s));
            else if (c == "-") s.push(-pop(s) + pop(s));
            else if (c == "*") s.push(pop(s) * pop(s));
            else if (c == "/") s.push( (double)1 / pop(s) * pop(s));
            else s.push(stoi(c));
        }
        return pop(s);
    }
};
