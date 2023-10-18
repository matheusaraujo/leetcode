/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function(rowIndex) {
  if (rowIndex === 0) return [1];
  else if (rowIndex === 1) return [1, 1];
  else {
      let ans = [1];
      const prev = getRow(rowIndex - 1);
      for(let i = 1; i < prev.length; i++) {
          ans.push(prev[i-1]+prev[i]);
      }
      ans.push(1);
      return ans;
  }
};
