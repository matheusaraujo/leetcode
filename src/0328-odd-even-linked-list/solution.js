/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var oddEvenList = function(head) {
   
  if (head == null) return null;

  var odd = head;
  var even = head.next;
  
  var evenFirst = even;
 
  while (1 == 1) {
    if (odd == null || even == null || (even.next) == null) {
      odd.next = evenFirst;
      break;
    }

    odd.next = even.next;
    odd = even.next;

    if (odd.next == null) {
      even.next = null;
      odd.next = evenFirst;
      break;
    }
            
    even.next = odd.next;
    even = odd.next;
  }
  
  return head;
};
