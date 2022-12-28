func interpret(command string) string {
  var ans = ""
  for i := 0; i < len(command); i++ {
    if string(command[i]) == "G" { 
      ans += "G"
    } else if string(command[i:i+2]) == "()" {
      ans += "o" 
      i+=1
    } else { 
      ans += "al"
      i+=3
    }
  }
  return ans
}
