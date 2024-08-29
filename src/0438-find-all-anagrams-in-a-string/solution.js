var getAscii = function(s, i) {
  return s.charCodeAt(i) - 97;
}

var isEqual = function(a, b) {
  for(let i = 0; i < a.length; i++)
    if (a[i] !== b[i]) return false;
  return true;
}

/**
 * @param {string} s
 * @param {string} p
 * @return {number[]}
 */
var findAnagrams = function(s, p) {
  let ans = [];
  let as = new Array(26).fill(0);
  let ap = new Array(26).fill(0);

  for(let i = 0; i < p.length; i++) {
    as[getAscii(s, i)]++;
    ap[getAscii(p, i)]++;
  }

  for(let i = p.length; i < s.length; i++) {
    if (isEqual(as, ap))
      ans.push(i - p.length);
    as[getAscii(s, i)]++;
    as[getAscii(s, i - p.length)]--;
  }

  if (isEqual(as, ap))
      ans.push(s.length - p.length);
  
  return ans;
};
