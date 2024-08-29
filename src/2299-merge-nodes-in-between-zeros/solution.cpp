/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* h) {
        ListNode d, *t = &d;
        while(h) {
            if (h->val == 0) h = h->next;
            if (!h) break;
            int s = 0;
            while(h->val != 0) s += h->val, h = h->next;
            t->next = new ListNode(s);
            t = t->next;
        }
        return d.next;
    }
};
