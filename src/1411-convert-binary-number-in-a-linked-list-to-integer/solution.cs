/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {

    private Tuple<int, int> getValue(ListNode n) {
        if (n.next == null) return Tuple.Create(n.val, 1);
        var m = getValue(n.next);
        return Tuple.Create(m.Item1 + n.val * m.Item2 * 2, m.Item2 * 2);
    }

    public int GetDecimalValue(ListNode head) {
        return getValue(head).Item1;
    }
}
