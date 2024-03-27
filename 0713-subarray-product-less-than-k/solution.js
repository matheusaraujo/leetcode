/**
 * @param {number[]} n
 * @param {number} k
 * @return {number}
 */
var numSubarrayProductLessThanK = function(n, k) {
    if (k <= 1) return 0;
    let [c, p, l, r] = [0, 1, 0, 0];

    for (r = 0; r < n.length; r++) {
        p *= n[r];

        while(p >= k)
            p /= n[l++];

        c += r - l + 1;
    }

    return c;
};
