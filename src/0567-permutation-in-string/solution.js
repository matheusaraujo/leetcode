/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var checkInclusion = function(s1, s2) {
  const s = a =>  a.split('').sort().join('');
  
  s1 = s(s1);
  const m = s1.length, n = s2.length;

  for(let i = 0; i <= n - m; i++)
    if (s1 === s(s2.substring(i, i +m))) return true;
  
  return false;
};
