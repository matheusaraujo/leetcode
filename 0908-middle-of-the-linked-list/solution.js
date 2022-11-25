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
var middleNode = function(head) {
    let c = head, i = 0;
    while(c) c = c.next, i++;
    i = i % 2 ? Math.floor(i/2) : Math.ceil(i/2);
    for(let j = 0; j < i; j++)
        head = head.next;
    return head;
};
