/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var backspaceCompare = function(s, t) {
  const prep = function(a) {
    let b = [];
    for(let i = 0; i < a.length; i++) {
      if (a.charAt(i) !== '#')
        b.push(a.charAt(i))
      else
        b.pop();
    }
    return b.join('');
  }

  s = prep(s);
  t = prep(t);

  return s === t;
};
