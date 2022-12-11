/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(n, t) {
  let l = 0, r = n.length-1, s;

  while(l < r) {
    s = n[l] + n[r];
    if (s === t) return new Array(l+1,r+1);
    else if (s < t) l++;
    else r--;
  }

};
