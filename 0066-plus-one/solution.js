/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
  let i = digits.length;

  digits[i-1]++;
  
  while(i-- > 0) {
    if (digits[i] < 10) break;
    digits[i] = 0;
    if (i > 0) digits[i-1]++;
    else digits.unshift(1);
    
  }

  return digits;
};
