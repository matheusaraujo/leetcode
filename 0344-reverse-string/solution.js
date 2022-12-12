/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
  const swap = (i, j) => {
    [s[i], s[j]] = [s[j], s[i]];
  }
  const m = s.length;
  for(let i = 0; i < m / 2; i++) {
    swap(i, m-i-1)
  }
};
