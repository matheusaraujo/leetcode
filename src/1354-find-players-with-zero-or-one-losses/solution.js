/**
 * @param {number[][]} matches
 * @return {number[][]}
 */
var findWinners = function(matches) {
    let h = [];
    for(let i = 0; i < matches.length; i++) {
      let l = matches[i][1];
      let w = matches[i][0];
      if (!h[l]) h[l] = 1;
      else h[l]++;
      if (!h[w]) h[w] = 0;
    }
    let a0 = [];
    let a1 = [];
    for(let i = 1; i < h.length; i++) {
      if (h[i] === 0) a0.push(i);
      else if (h[i] === 1) a1.push(i);
    }
    return [a0, a1];
};
