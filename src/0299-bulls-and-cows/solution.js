String.prototype.replaceAt = function(index, replacement) {
    return this.substring(0, index) + replacement + this.substring(index + replacement.length);
}

/**
 * @param {string} s
 * @param {string} g
 * @return {string}
 */
var getHint = function(s, g) {
  let b = c = 0;
  for(let i = 0; i < g.length; i++) {
    if (s[i] === g[i]) {
      b++;
      s = s.replaceAt(i, '_');
      g = g.replaceAt(i, '_');
    } 
  }

  for(let i = 0; i < g.length; i++) {
    if (g[i] !== '_') {
      let j = s.indexOf(g[i]);
      if (j !== -1) { 
        c++;
        s = s.replaceAt(j, '_');
      }
    }
  }

  return `${b}A${c}B`;
};
