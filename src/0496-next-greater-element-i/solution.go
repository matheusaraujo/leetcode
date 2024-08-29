func nextGreaterElement(n1 []int, n2 []int) []int {
    a := make([]int, len(n1), len(n1))
    for i := 0; i < len(a); i++ { a[i] = -1 }
    for i := 0; i < len(n1); i++ {
        k := 0
        for j := 0; j < len(n2); j++ {
            if n1[i] == n2[j] {
                k = j
                break
            }
        }
        for k := k; k < len(n2); k++ {
            if n1[i] < n2[k] {
                a[i] = n2[k]
                break
            }
        }
    }
    return a
}
