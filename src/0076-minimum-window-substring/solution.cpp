class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> m;
        string ans = "";
        for(char c : t) {
            if (m.find(c) == m.end()) m[c] = 0;
            m.at(c)++;
        }
        int left = 0, minLeft = 0, minLen = s.length()+1, count = 0;

        for(int right = 0; right < s.length(); right++) {
            char c = s[right];
            if (m.find(c) != m.end()) {
                m.at(c)--;
                if (m.at(c) >= 0) count++;
                while(count == t.length()) {
                    if (right-left+1 < minLen) {
                        minLeft = left;
                        minLen = right-left+1;
                    }
                    char l = s[left];
                    if (m.find(l) != m.end()) {
                        m.at(l)++;
                        if (m.at(l) > 0) count--;
                    }
                    left++;
                }
            }
        }

        return minLen > s.length() ? "" : s.substr(minLeft, minLen);
    }
};
