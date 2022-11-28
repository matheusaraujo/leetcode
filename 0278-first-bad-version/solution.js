/**
 * Definition for isBadVersion()
 * 
 * @param {integer} version number
 * @return {boolean} whether the version is bad
 * isBadVersion = function(version) {
 *     ...
 * };
 */

/**
 * @param {function} isBadVersion()
 * @return {function}
 */
var solution = function(isBadVersion) {
    /**
     * @param {integer} n Total versions
     * @return {integer} The first bad version
     */
    return function(n) {
        let b = 1, e = n;

        while(true) {
          let m = Math.floor((b+e)/2);
          let isBad = isBadVersion(m);

          if (isBad === true) {
            if (m === 0 || m === n) return m;
            else {
              let isPrevBad = isBadVersion(m-1);
              if (isPrevBad === false) return m;
              b = b, e = m-1;
            }
          }
          else {
            let isNextBad = isBadVersion(m+1);
            if (isNextBad === true) return m+1;
            b = m+1, e = e;
          }
        }
    };
};
