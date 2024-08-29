/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(n, t) {
  let l = 0, h = n.length - 1;

  while(l <= h) {
    const m = l + Math.floor((h - l) / 2);

    if (n[m] === t) return m;

    if (n[l] > n[h]) {
      if (n[m] < n[l]) {
        if (t > n[m] && t < n[l]) l = m + 1;
        else h = m - 1;
      } else {
        if (t < n[m] && t > n[h]) h = m - 1;
        else l = m + 1;
      }
    } else if (t < n[m]) h = m - 1;
    else l = m + 1;
  }
  
  return -1;
};
