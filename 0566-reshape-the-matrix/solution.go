func matrixReshape(mat [][]int, r int, c int) [][]int {
    var M, N int = len(mat), len(mat[0])
    if (r == M && c == N) || M * N != r * c {
        return mat
    }
    a := make([][]int, r)
    for i := range a {
        a[i] = make([]int, c)
    }
    var i2, j2 int = 0, 0
    for i1 := 0; i1 < M; i1++ {
        for j1 := 0; j1 < N; j1++ {
            a[i2][j2] = mat[i1][j1]
            j2++
            if j2 == c {
                j2 = 0
                i2++
            }
        }
    }
    return a
}
