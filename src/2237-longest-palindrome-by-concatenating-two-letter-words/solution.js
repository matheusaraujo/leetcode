/**
 * @param {string[]} words
 * @return {number}
 */
var longestPalindrome = function(words) {
  let h = {};
  let ans = 0;
  let self = 0;
  let n = words.length;
  for(let i = 0; i < n; i++) {
    let s = words[i];
    let a = s[0];
    let b = s[1];
    if (h[s]) {
      ans += 4;
      if(--h[s] == 0) h[s] = null;
      if (a === b) self--;
    } else if (a === b) {
      h[s] = 1;
      self++;
    } else {
      let t = b + a;
      if (!h[t]) h[t] = 1;
      else h[t]++;
    }
  }
  if (self > 0) ans += 2;
  return ans;
};
