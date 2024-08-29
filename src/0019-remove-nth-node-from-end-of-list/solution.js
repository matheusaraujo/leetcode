/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
  const solve = function (node, n) {
    if (!node) return 0;
    const i = solve(node.next, n);
    if (i === n) {
      node.next = node.next ? node.next.next : null;
    }
    return i + 1;
  }
  const d = new ListNode();
  d.next = head;
  solve(d, n)
  return d.next;
};

