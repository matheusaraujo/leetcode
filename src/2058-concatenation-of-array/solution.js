/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    let nums2 = [];
    for(let i = 0; i < nums.length; i++)
        nums2[i] = nums2[nums.length+i] = nums[i];
    return nums2;
};
