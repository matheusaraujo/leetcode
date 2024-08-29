/**
 * @param {string} s
 * @return {boolean}
 */
var halvesAreAlike = function(s) {
  let n = s.length;
  let a = s.substring(0, n/2);
  let b = s.substring(n/2, n);
  let v = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'];
  let ca = cb = 0;
  for(let i = 0; i < a.length; i++) {
    if (v.indexOf(a[i]) !== -1) ca++;
    if (v.indexOf(b[i]) !== -1) cb++;
  }
  return ca === cb;
};
