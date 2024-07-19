/**
 * @param {number[][]} edges
 * @return {number}
 */
var findCenter = function(e) {
    return e[0][0] == e[1][0] || e[0][0] == e[1][1] ? e[0][0] : e[0][1];
};
