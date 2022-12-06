/**
 * @param {string[]} words
 * @param {number} k
 * @return {string[]}
 */
var topKFrequent = function(words, k) {
    let a = [], b = [];
    for(let i = 0; i < words.length; i++) {
      if (a.find(o => o.w === words[i]) === undefined)
        a.push({w: words[i], r: 1});
      else
        a.find(o => o.w === words[i]).r++;
    }
    a.sort((o,p) => p.r === o.r ?
      o.w.localeCompare(p.w) :
      p.r - o.r
    );
    for(let i = 0; i < k; i++)
      b.push(a[i].w);
    return b;
};
