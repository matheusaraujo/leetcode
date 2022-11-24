/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode ans = null;
        if (list1 == null && list2 == null)
            return null;
        if (list2 == null) {
            ans = new ListNode(list1.val);
            list1 = list1.next;
            ans.next = mergeTwoLists(list1, list2);
        }
        else if (list1 == null) {
            ans = new ListNode(list2.val);
            list2 = list2.next;
            ans.next = mergeTwoLists(list1, list2);
        }
        else if (list2 == null || list1.val < list2.val) {
            ans = new ListNode(list1.val);
            list1 = list1.next;
            ans.next = mergeTwoLists(list1, list2);
        }
        else {
            ans = new ListNode(list2.val);
            list2 = list2.next;
            ans.next = mergeTwoLists(list1, list2);
        }
        return ans;
    }
}
