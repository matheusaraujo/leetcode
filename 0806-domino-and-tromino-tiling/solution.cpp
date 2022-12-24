class Solution {
private:
    vector<long long int> d;
    vector<long long int> t;

    int m(long long int n) {
        return n % (int)(pow(10, 9)+7);
    }
    
    long long int domino(int n) {
        if (n == 0 || n == 1) return 1;
        if (n == 2) return 2;
        if (d[n] != -1) return d[n];
        d[n] = m(domino(n-1) + domino(n-2) + tromino(n-1)*2);
        return d[n];
    }

    long long int tromino(int n) {
        if (n == 0 || n == 2) return 1;
        if (n == 1) return 0;
        if (t[n] != -1) return t[n];
        t[n] = m(domino(n-2) + tromino(n-1));
        return t[n];
    }

public:
    int numTilings(int n) {
        if (n == 0) return 0;
        
        d = vector<long long int>(n+1, -1);
        t = vector<long long int>(n+1, -1);

        return m(domino(n));
    }
};
