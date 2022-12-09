/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
  let h = {};
  for(let i = 0; i < nums.length; i++) {
    if (h[nums[i]] === true) return true;
    h[nums[i]] = true;
  }
  return false;
};
