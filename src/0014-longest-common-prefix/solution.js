/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
  let ans = strs[0];

  const get = function(s, t) {
    let a = "";
    for(let i = 0; i < s.length && i < t.length; i++) {
      if (s[i] === t[i]) a += s[i];
      else break;
    }
    return a;
  }

  for(let i = 1; i < strs.length; i++) {
    ans = get(ans, strs[i]);
  }

  return ans;  
};
