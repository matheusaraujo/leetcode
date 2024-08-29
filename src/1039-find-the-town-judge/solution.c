#include <stdio.h>

int findJudge(int n, int** trust, int trustSize, int* trustColSize) {

    int f[n+1];
    int t[n+1];

    for(int i = 1; i <= n; i++) {
        f[i] = t[i] = 0;
    }

    for(int i = 0; i < trustSize; i++) {
        f[trust[i][0]]++;
        t[trust[i][1]]++;
    }

    for(int i = 1; i <= n; i++) {
        if (f[i] == 0 && t[i] == n - 1)
            return i; 
    }

    return -1;
}
