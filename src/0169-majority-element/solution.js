/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let count = 0, candidate = 0;

    for(num of nums) {
        if (count === 0) {
            candidate = num;
            count = 1;
        }
        else if (num === candidate) count++;
        else count--;
    }

    return candidate;
};
