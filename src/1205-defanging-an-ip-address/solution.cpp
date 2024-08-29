class Solution {
public:
    string defangIPaddr(string a) {
      string b;
      for(char c : a) {
        if (c == '.') b += "[.]";
        else b += c;
      }
      return b;
    }
};
