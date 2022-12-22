func subtractProductAndSum(n int) int {
  var s, p int = 0, 1

  for n > 0 {
    var d = n % 10
    s += d
    p *= d
    n /= 10
  }

  return p-s;
}
