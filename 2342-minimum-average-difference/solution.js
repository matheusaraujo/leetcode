/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumAverageDifference = function(nums) {
  let imin = 0, min = Number.MAX_SAFE_INTEGER; 
  let left = 0;
  let right = nums.reduce((a,c) => a+=c,0);
  for(let i = 0; i < nums.length; i++) { 
    left += nums[i];
    right -= nums[i];
    const avgLeft = Math.floor(left / (i+1));
    const avgRight = i == nums.length - 1 ? 0 : Math.floor(right / (nums.length-i-1));
    const diff = Math.abs(avgLeft - avgRight);
    if (diff < min) {
      min = diff;
      imin = i;
    } 
  } 
  return imin; 
};
