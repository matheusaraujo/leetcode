/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
    let ls = 0;
    let rs = nums.reduce((a, b) => a + b, 0);
    for(let i = 0; i < nums.length; i++) {
        rs -= nums[i];
        if (ls === rs) return i;
        ls += nums[i];
    }
    return -1;
};
