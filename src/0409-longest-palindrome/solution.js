/**
 * @param {string} s
 * @return {number}
 */
var longestPalindrome = function(s) {
    let c = {};
    for(let i = 0; i < s.length; i++) {
        if (!c[s[i]]) c[s[i]] = 1;
        else c[s[i]]++;
    }
    let ans = 0;
    for (i in c) {
        let j = c[i];
        if (j % 2 === 0) ans += j, c[i] = 0;
        else if (j > 2) ans += (j-1), c[i] = 1;
    }
    for (i in c) {
        let j = c[i];
        if (j === 1) {
            ans++; break;
        }
    }
    return ans;
};
