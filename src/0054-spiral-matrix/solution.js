/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
  const m = matrix.length;
  const n = matrix[0].length;
  
  let ans = [];
  let t = 0, b = m-1, l=0, r=n-1, d=1;

  while (t <= b && l <= r) {
    if (d === 1) {
      for(let i = l; i <= r; ++i) {
        ans.push(matrix[t][i]);
      }
      ++t;
      d = 2;
    } else if (d === 2) {
      for(let i = t; i <= b; ++i) {
        ans.push(matrix[i][r]);
      }
      --r;
      d = 3;
    } else if (d === 3) {
      for(let i = r; i >= l; --i) {
        ans.push(matrix[b][i]);
      }
      --b;
      d = 4
    } else if (d === 4) {
      for(let i = b; i >= t; --i) {
        ans.push(matrix[i][l]);
      }
      ++l;
      d = 1;
    }
  }

  return ans;  
};
