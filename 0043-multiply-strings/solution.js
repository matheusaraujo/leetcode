/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var multiply = function(num1, num2) {

  if (num1 === "0" || num2 === "0") return "0";

  let tmp = new Array(num1.length + num2.length).fill(-1);
  let ans = "";

  for(let i = num1.length-1; i > -1; i--) {
    for(let j = num2.length-1; j > -1; j--) {
      if (tmp[i+j] === -1) tmp[i+j] = 0;
      tmp[i+j] += num1[i] * num2[j];
    }
  }

  let i = tmp.length - 1;
  while(tmp[i] === -1) i--;

  for(i; i > -1; i--) {
    if (tmp[i] < 10)
      ans = (tmp[i] + '') + ans;
    else {
      let a = tmp[i] % 10;
      let b = (tmp[i] - a) / 10;
      if (i > 0) {
        tmp[i-1] += b;
        ans = (a+'') + ans;
      }
      else {
        ans = (b+''+a+'') + ans;
      }
    }
  }

  return ans;  
};
