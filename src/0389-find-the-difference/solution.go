func findTheDifference(s string, t string) byte {
  var b byte
  for i := 0; i < len(s); i++ { b ^= s[i] }
  for i := 0; i < len(t); i++ { b ^= t[i] }
  return b
}
