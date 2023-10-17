/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    let ans = 0;
    for(let i = 0; i < s.length; i++) {
        let ad = 0;
        
        if (s[i] === 'I') {
            if (i + 1 < s.length && s[i+1] === 'V') {
                ad = 4;
                i++;
            }
            else if (i + 1 < s.length && s[i+1] === 'X') {
                ad = 9;
                i++;
            }
            else ad = 1;
        }
        else if (s[i] === 'V') ad = 5;
        else if (s[i] === 'X') {
            if (i + 1 < s.length && s[i+1] === 'L') {
                ad = 40;
                i++;
            }
            else if (i + 1 < s.length && s[i+1] === 'C') {
                ad = 90;
                i++;
            }
            else ad = 10;
        }
        else if (s[i] === 'L') ad = 50;
        else if (s[i] === 'C') {
            if (i + 1 < s.length && s[i+1] === 'D') {
                ad = 400;
                i++;
            }
            else if (i + 1 < s.length && s[i+1] === 'M') {
                ad = 900;
                i++;
            }
            else ad = 100;
        }
        else if (s[i] === 'D') ad = 500;
        else if (s[i] === 'M') ad = 1000;

        ans += ad;
    }
    return ans;
};
