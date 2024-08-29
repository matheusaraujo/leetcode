class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int N = t.size();
        vector<int> a = vector<int>(N, 0);
        stack<int> s;

        for(int i = 0; i < N; i++) {
            while(!s.empty() && t[i] > t[s.top()])
                a[s.top()] = i - s.top(), s.pop();
            s.push(i);
        }

        return a;
    }
};
