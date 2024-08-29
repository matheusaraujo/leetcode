/**
 * @param {number[]} a
 * @param {number[]} b
 * @return {number[]}
 */
var intersect = function(a, b) {
  
  a.sort((o,p) => o - p);
  b.sort((o,p) => o - p);

  let i = 0, j = 0, ans = [];

  while(i < a.length && j < b.length) {
    if (a[i] === b[j]) {
      ans.push(a[i]);
      i++, j++;
    }
    else if (a[i] > b[j]) j++;
    else i++;
  }

  return ans;
};
