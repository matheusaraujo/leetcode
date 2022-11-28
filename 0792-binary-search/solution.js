/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
  var rec = function(a, x, b, e) {
    if (b > e) return -1;
    let m = Math.floor((b+e)/2);
    if (a[m] === x) return m;

    if (a[m] > x) return rec(a, x, b, m-1);
    else return rec(a, x, m+1, e);
  }

  return rec(nums, target, 0, nums.length-1);
};
