/**
 * @param {string} word1
 * @param {string} word2
 * @return {boolean}
 */
var closeStrings = function(word1, word2) {
  if (word1.length !== word2.length)
    return false;
  
  let w1 = new Array(27).fill(0)
  let w2 = new Array(27).fill(0)
  
  for (let i = 0; i < word1.length; i++) {
    w1[word1.charCodeAt(i)-97]++;
    w2[word2.charCodeAt(i)-97]++;
  }

  for(let i = 0; i < w1.length; i++) {
    if (w1[i] === 0 && w2[i] !== 0) return false;
    if (w1[i] !== 0 && w2[i] === 0) return false;
  }

  w1.sort();
  w2.sort();

  for(let i = 0; i < w1.length; i++)
    if (w1[i] !== w2[i])
      return false;
  
  return true;
};
