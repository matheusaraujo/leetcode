/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let st = s.length - 1;
    while(st > 0 && s[st] == ' ') st--;
    for(let i = st; i >= 0; i--)
      if (s[i] === ' ') return st - i;
    return st+1;
};
