/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
  if (nums.length === 0) return 0;
  if (nums.length === 1) return nums[0];
  if (nums.length === 2) return Math.max(nums[0], nums[1]);

  let m2 = nums[0];
  let m1 = Math.max(nums[0], nums[1]);

  for(let i = 2; i < nums.length; i++) {
    const m = Math.max(nums[i] + m2, m1);

    m2 = m1;
    m1 = m;
  }

  return m1;
};
