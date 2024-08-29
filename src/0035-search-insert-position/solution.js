/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
  let b = 0;
  let e = nums.length - 1;
  while(b <= e) {
    let n = b + Math.floor((e - b) / 2);
    if (nums[n] === target) return n;
    else if (nums[n] > target) {
      if (n == 0 || nums[n-1] < target) return n;
      e = e - 1;
    }
    else if (nums[n] < target){
      if (n >= nums.length-1 || nums[n+1] > target) return n+1;
      b = b + 1;
    }
  }  
};
