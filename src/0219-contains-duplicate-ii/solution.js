/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function(nums, k) {
    let map = {};
    map[nums[0] + ""] = 0;

    for(let i = 1; i < nums.length; i++) {
        if (map[nums[i]] !== undefined && i - map[nums[i]] <= k)
            return true;
        map[nums[i] + ""] = i;
    }

    return false;
};
