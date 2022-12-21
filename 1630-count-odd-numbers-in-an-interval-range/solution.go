func countOdds(low int, high int) int {
  var diff int = high - low
  var count int = diff / 2

  if low % 2 == 1 || high % 2 == 1 {
      count++
  }

  return count
}
