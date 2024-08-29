class Solution {
public:
  int minPartitions(string n) {
    char m = '0';
    for(int i = 0; i < n.size(); i++)
      m = max(m, n[i]);
    return m-'0';
  }
};
