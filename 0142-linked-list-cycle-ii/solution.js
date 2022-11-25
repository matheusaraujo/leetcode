/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var detectCycle = function(head) {
    let i = 0;
    while(head) {
        head.pos = i++;
        if (head.next && head.next.pos !== undefined)
            return head.next;
        head = head.next;
    } 
    return null;
};
