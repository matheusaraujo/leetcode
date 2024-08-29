/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let max = -(Math.pow(2,53)-1);
    let tmp = 0;

    for(let i = 0; i < nums.length; i++) {
      tmp += nums[i];
      if (max < tmp) max = tmp;
      if (tmp < 0) tmp = 0;
    }

    return max;
};
