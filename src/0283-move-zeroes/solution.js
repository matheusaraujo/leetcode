/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
  for(let i = 0, j = 0; i < nums.length; ) {
    if (nums[i] === 0) i++;
    else {
      let tmp = nums[i];
      nums[i] = nums[j];
      nums[j] = tmp;
      i++;
      j++;
    }
  }
  return nums;
};
