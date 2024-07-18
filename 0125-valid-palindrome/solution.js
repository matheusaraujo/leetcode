/**
 * @param {string} s
 * @return {boolean}
 */

const isAlphanumeric = function(s, i) {
    c = s.charCodeAt(i);
    return (c >= 48 && c <= 57) ||  // Numbers
        (c >= 97 && c <= 122) ||    // Lowercase letters
        (c >= 65 && c <= 90);       // Uppercase letters
}

const areEquals = function(s, i, j) {
    let c1 = s.charCodeAt(i);
    let c2 = s.charCodeAt(j);
    if (c1 >= 65 && c1 <= 90) c1 += 32;
    if (c2 >= 65 && c2 <= 90) c2 += 32;
    return c1 === c2;
}

var isPalindrome = function(s) {
    let i = 0, j = s.length - 1;

    while(i < j) {
        while (!isAlphanumeric(s, i) && i < j) i++;
        while (!isAlphanumeric(s, j) && j > i) j--;
        if (!areEquals(s, i, j)){
            return false;
        }
        i++;
        j--;
    }

    return true;
};
