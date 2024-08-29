/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {
  let a = [];
  while(head) {
    a.push(head.val);
    head = head.next;
  }  
  for(let i = 0; i < a.length; i++) {
    if (a[i] !== a[a.length-i-1])
      return false;
  }
  return true;
};
