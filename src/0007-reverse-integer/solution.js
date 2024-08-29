/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let y = 0;
    
    if (x > 0) {
        y = (x + '')
            .split('')
            .reverse()
            .join('') * 1;
    }
    else {
        y = (x + '')
            .substring(1)
            .split('')
            .reverse()
            .join('') * (-1);
    }

    return y <= (2**31)-1 && y >= ((-2)**31) ? y : 0;
};
