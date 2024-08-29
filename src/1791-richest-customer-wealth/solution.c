int maximumWealth(int** a, int m, int* n){
    int max = 0, s;
    for(int i = 0; i < m; i++) {
        s = 0;
        for(int j = 0; j < n[i]; j++)
            s += a[i][j];
        if (s > max) max = s;
    }
    return max;
}
