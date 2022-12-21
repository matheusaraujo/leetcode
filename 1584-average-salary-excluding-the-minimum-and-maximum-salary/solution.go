func average(salary []int) float64 {
    sort.Ints(salary)
    var acc float64

    for i := 1; i < len(salary) - 1; i++ {
        acc += float64(salary[i])
    }

    return acc / float64(len(salary)-2)
}
