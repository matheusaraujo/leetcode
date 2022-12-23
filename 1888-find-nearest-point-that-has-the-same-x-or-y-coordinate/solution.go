func abs(x int) int {
    if x > 0 {
        return x
    }
    return -x
}

func dist (x int, y int, p []int) int {
    return abs(x-p[0]) + abs(y-p[1]);
}

func nearestValidPoint(x int, y int, points [][]int) int {
    var ans, min int = -1, math.MaxInt32

    for i := 0; i < len(points); i++ {
        if x == points[i][0] || y == points[i][1] {
            var d = dist(x, y, points[i])
            if d < min {
                min = d
                ans = i
            }
        }
    }

    return ans;
}
