func isCollinear(x1 int, y1 int, x2 int, y2 int, x3 int, y3 int) bool {
    return x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) == 0
}

func checkStraightLine(c [][]int) bool {
    for i := 2; i < len(c); i++ {
        if !isCollinear(c[i-2][0], c[i-2][1], c[i-1][0], c[i-1][1], c[i][0], c[i][1]) { 
            return false
        }
    }
    return true
}
