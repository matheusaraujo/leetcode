let f = [];
var fat = function(x) {
  if (f[x]) return f[x];
  f[x] = x < 1 ? 1 : fat(x-1) * x;
  return f[x];
}

/**
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
var uniquePaths = function(m, n) {
    return (fat(m+n-2)/(fat(m-1)*fat(n-1)));
};
