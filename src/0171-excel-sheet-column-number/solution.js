/**
 * @param {string} columnTitle
 * @return {number}
 */
var titleToNumber = function(columnTitle) {
    let answer = 0, base = 1;
    for(let i = columnTitle.length - 1; i > -1; i--, base *= 26)
        answer += (columnTitle.charCodeAt(i) - 64) * base;
    return answer;
};
