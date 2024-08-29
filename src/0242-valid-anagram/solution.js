/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
  const f = a => a.split('').sort().join('');
  return f(s) === f(t); 
};
