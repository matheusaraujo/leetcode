/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    if (nums.length == 0) return 0;

    let index = 0, pos = 0;

    while(index != nums.length) {
        if (nums[index] !== val)
            nums[pos++] = nums[index];
        index++;
    }

    return pos;
};
