/**
 * @param {number[]} stones
 * @return {number}
 */
var lastStoneWeight = function(stones) {
  const s = (a,b) => a - b;
  stones.sort(s);
  
  while(stones.length > 1) {
    const n = stones.length;
    if (stones[n-1] === stones[n-2]) {
      stones.pop();
      stones.pop();
    }
    else {
      stones[n-2] = stones[n-1] - stones[n-2];
      stones.pop();
      stones.sort(s);
    }
  }

  return stones.length === 1 ? stones[stones.length-1] : 0;
};
