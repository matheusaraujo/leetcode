/**
 * @param {number[][]} mat
 * @param {number} r
 * @param {number} c
 * @return {number[][]}
 */
var matrixReshape = function(mat, r, c) {
  const m = mat.length;
  const n = mat[0].length;

  if (m * n !== r * c) return mat;

  let ans = Array.from(Array(r), () => new Array(c));
  let i1 = 0, i2 = 0, j1 = 0, j2 = 0;

  for(i1 = 0; i1 < m; i1++) {
    for(j1 = 0; j1 < n; j1++) {
      ans[i2][j2] = mat[i1][j1];
      j2++
      if (j2 === c) {
        i2++;
        j2 = 0;
      }
    }
  }

  return ans;

};
