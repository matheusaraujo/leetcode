/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
  
  const get = function (l) {
    let n = BigInt(0), f = BigInt(1);
    while(l) {
      n += BigInt(l.val) * f;
      f *= BigInt(10);
      l = l.next;
    }
    return n;
  }

  const s = (get(l1) + get(l2)).toString().split('');
  let ans = null;

  for(let i = 0; i < s.length; i++) {
    ans = new ListNode(s[i], ans);  
  }

  return ans;
};
