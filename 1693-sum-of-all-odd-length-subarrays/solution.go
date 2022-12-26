func sumOddLengthSubarrays(arr []int) int {
    n, ans := len(arr), 0

    for left := 0; left < n; left++ {
        s := 0
        for right := left; right < n; right++ {
            s += arr[right]
            if (right - left + 1) % 2 == 1 {
                ans += s
            }
        }
    }
    return ans
}
