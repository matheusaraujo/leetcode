/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function(s, t) {
    for (let i = 0, it = -1; i < s.length; i++) {
        it++;
        while(it < t.length && t[it] != s[i])
            it++;
        if (it == t.length) return false;
    }
    return true;
};
