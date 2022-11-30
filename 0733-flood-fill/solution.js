/**
 * @param {number[][]} image
 * @param {number} sr
 * @param {number} sc
 * @param {number} color
 * @return {number[][]}
 */
var floodFill = function(image, sr, sc, color) {
  return solve(image, sr, sc, image[sr][sc], color);
};

var solve = function (i, r, c, oc, nc) {
  if (r > -1 && c > -1 && r < i.length && c < i[r].length && i[r][c] === oc && i[r][c] !== nc) {
    i[r][c] = nc;
    i = solve(i, r-1, c, oc, nc);
    i = solve(i, r+1, c, oc, nc);
    i = solve(i, r, c-1, oc, nc);
    i = solve(i, r, c+1, oc, nc);
  }
  return i;
}
