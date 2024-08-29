/**
 * @param {number[]} arr
 * @return {boolean}
 */
var uniqueOccurrences = function(arr) {
  let h = [];
  for(let i = 0; i < arr.length; i++) {
    let x = arr[i]+1000;
    h[x] = h[x] ? ++h[x] : 1;
  }
  h.sort();
  for(let i = 1; h[i] && i < h.length; i++)
    if (h[i-1] === h[i]) return false;
  return true;
};
