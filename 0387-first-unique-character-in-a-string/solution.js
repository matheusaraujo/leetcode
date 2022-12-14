/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
  let map = {};

  for(let i = 0; i < s.length; i++) {
    if (map[s[i]] === undefined) map[s[i]] = i;
    else map[s[i]] = false;
  }

  for(i in map)
    if (map[i] !== false) return map[i];

  return -1;
};
