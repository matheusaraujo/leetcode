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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if (list1 == NULL) return list2;
      if (list2 == NULL) return list1;

      ListNode *p = NULL;
      if (list1->val > list2-> val) p = list2, list2 = list2->next;
      else p = list1, list1 = list1->next;
      ListNode *c = p;

      while(list1 && list2) {
        if (list1->val < list2->val) c->next = list1, list1 = list1->next;
        else c->next = list2, list2 = list2->next;
        c = c->next;
      }

      if (!list1) c->next = list2;
      else c->next = list1;

      return p;
    }
};
