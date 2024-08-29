/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    let ans = [];
    for(let i = 1; i <= n; i++) {
        let a = "";
        if (i % 3 === 0) a += "Fizz";
        if (i % 5 === 0) a += "Buzz";
        if (a === "") a = i.toString();
        ans.push(a);
    }
    return ans;
};
