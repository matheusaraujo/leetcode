/**
 * @param {character[]} tasks
 * @param {number} n
 * @return {number}
 */
var leastInterval = function(tasks, n) {
  if (n === 0) return tasks.length;
  
  let map = {};
  for(let t of tasks) {
    if (map[t] === undefined) map[t] = 0;
    map[t]++;
  }

  let max = 0;
  for(let t in map)
    max = Math.max(max, map[t]);
  
  let count = 0;
  for(let t in map)
    if (map[t] === max) count++;

  return Math.max(
    (max-1)*(n+1)+count,
    tasks.length
  );
};
