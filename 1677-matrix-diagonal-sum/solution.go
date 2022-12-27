func diagonalSum(mat [][]int) int {
    var a, N int = 0, len(mat)
    for i := 0; i < N; i++ {
        a += mat[i][i]
        a += mat[i][N-i-1]
    }
    if N % 2 == 1 {
        a -= mat[N/2][N/2]
    }
    return a
}

