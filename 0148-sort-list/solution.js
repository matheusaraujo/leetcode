/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

var getMiddle = function(h) {
  if (h === null) return h;

  let s = h, f = h;

  while(f.next !== null && f.next.next !== null) {
    s = s.next;
    f = f.next.next;
  }

  return s;
}

var merge = function(a, b) {
  let r = null;

  if (a === null) return b;
  if (b === null) return a;

  if (a.val <= b.val) {
    r = a;
    r.next = merge(a.next, b);
  }
  else {
    r = b;
    r.next = merge(a, b.next);
  }
  return r;
}

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var sortList = function(h) {
    if (h === null || h.next === null) return h;

    let m = getMiddle(h);
    let nm = m.next;

    m.next = null;

    let left = sortList(h);
    let right = sortList(nm);

    return merge(left, right);
};
