/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    let i = 1;
    while (x >= i * i)
        i++;
    return i - 1;
};
