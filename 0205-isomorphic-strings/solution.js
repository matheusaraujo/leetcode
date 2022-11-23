/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    let maps = {};
    let mapt = {};
    for(let i = 0; i < s.length; i++) {
        if (maps[s[i]] && maps[s[i]] !== t[i])
            return false;
        if (mapt[t[i]] && mapt[t[i]] !== s[i])
            return false;
        maps[s[i]] = t[i];
        mapt[t[i]] = s[i];
    }
    return true;
};
