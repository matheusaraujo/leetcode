/**
 * @param {number} n
 * @return {number}
 */

var fib = function(n, m) {
  if (m[n]) return m[n];
  let ans = 0;
  if (n == 1) ans = 1;
  else if (n == 2) ans = 2;
  else ans = fib(n-1,m)+fib(n-2,m);
  m[n] = ans;
  return ans;
}

var climbStairs = function(n) {
    return fib(n, []);
};
