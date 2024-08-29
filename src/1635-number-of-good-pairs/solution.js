/**
 * @param {number[]} nums
 * @return {number}
 */
var numIdenticalPairs = function(nums) {
    let m = {}, answer = 0;
    for(num of nums) {
        if (m[num] === undefined) m[num] = 1;
        else answer += m[num]++;
    }
    return answer;
};
