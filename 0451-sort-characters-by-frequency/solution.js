/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function(s) {
    let a = [];

    for(let i = 0; i < s.length; i++) {
      if (a.find(o => o.c === s[i]))
        a.find(o => o.c === s[i]).r++;
      else
        a.push({c: s[i], r: 1});
    }

    a.sort((o, p) => p.r - o.r);

    return a.reduce((o, p) => 
      o += new Array(p.r).fill(p.c).join(''), 
      ''
    );
};
