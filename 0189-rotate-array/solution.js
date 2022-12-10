/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
  const n = nums.length;
  let n2 = nums.slice();
  for(let i = 0; i < n; i++) {
    nums[(i+k)%n] = n2[i];
  }
};
