/**
 * @param {number} columnNumber
 * @return {string}
 */
var convertToTitle = function(columnNumber) {
    let answer = "";
    while(columnNumber > 0) {
        let remainder = columnNumber % 26 || 26;
        answer = String.fromCharCode(remainder + 64) + answer;
        columnNumber = (columnNumber - remainder) / 26;
    }
    return answer;
};
