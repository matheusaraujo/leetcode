/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    var s = 0;
    for(let i = 0; i < nums.length; i++) {
        s += nums[i];
        nums[i] = s;
    }
    return nums;
};
