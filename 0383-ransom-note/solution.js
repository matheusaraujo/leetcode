/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    for(let i = 0; i < ransomNote.length; i++) {
        let j = magazine.indexOf(ransomNote[i]);
        if (j === -1) return false;
        magazine = magazine.slice(0, j) + magazine.slice(j + 1, magazine.length);
    }
    return true;
};
