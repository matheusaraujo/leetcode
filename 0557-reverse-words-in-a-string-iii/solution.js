/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
  const reverse = function(w) {
    let y = '';
    const m = w.length;
    for(let i = 0; i < w.length; i++)
      y += w[m-i-1];
    return y;
  }
  return s.split(' ').reduce(
    (a, c) => a += reverse(c) + ' ', ''
  ).slice(0, -1);
};
