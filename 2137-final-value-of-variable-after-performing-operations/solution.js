/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
    let result = 0;
    for(let op of operations) {
        if (op[1] === '+') result++;
        else result--;
    }
    return result;
};
