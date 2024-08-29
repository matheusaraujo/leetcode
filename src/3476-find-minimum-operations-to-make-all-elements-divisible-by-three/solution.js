/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumOperations = function(nums) {
    let answer = 0;

    for(num of nums) {
        if (num % 3 !== 0) answer++;
    }

    return answer;
};
