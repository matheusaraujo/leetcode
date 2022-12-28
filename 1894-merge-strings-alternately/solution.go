func Max(x, y int) int {
 if x > y { return x }
 return y
}

func mergeAlternately(word1 string, word2 string) string {
  var N1, N2 int = len(word1), len(word2)
  var N int = Max(N1, N2)

  var ans = ""

  for i:= 0; i < N; i++ {
      if (i < N1) { ans += string(word1[i]) }
      if (i < N2) { ans += string(word2[i]) }
  }

  return ans
}
