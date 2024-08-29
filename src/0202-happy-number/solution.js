/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {
  let h = {};
  while(true) {
    if (n === 1) return true;
    if (h[n] === true) return false;
    
    h[n] = true;
    n = n.toString().split('')
      .reduce((a, i) => a += i*i, 0);
  }
  
};
