/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
  if (numRows === 1) return [[1]];
  if (numRows === 2) return [[1],[1,1]];
  const p = generate(numRows-1);
  const m = p.length - 1;
  let a = new Array(numRows);
  a[0] = a[numRows-1] = 1;
  for(let i = 1; i < numRows-1; i++)
    a[i] = p[m][i-1] + p[m][i];
  p.push(a);
  return p;
};
