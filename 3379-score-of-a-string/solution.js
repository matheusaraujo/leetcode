/**
 * @param {string} s
 * @return {number}
 */
var scoreOfString = function(s) {
    let a = 0;
    for(let i = 1; i < s.length; i++)
        a += Math.abs(s.charCodeAt(i-1) - s.charCodeAt(i));
    return a;
};
