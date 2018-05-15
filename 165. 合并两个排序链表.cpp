/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param l1: ListNode l1 is the head of the linked list
     * @param l2: ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    ListNode * mergeTwoLists(ListNode * l1, ListNode * l2) {
        // write your code here
        if(l1==NULL) return l2;
        else if(l2==NULL) return l1;
        ListNode *head=NULL;
        if(l1->val<l2->val)
        {
            head=l1;
            head->next=mergeTwoLists(l1->next,l2);
        }
        else
        {
             head=l2;
            head->next=mergeTwoLists(l1,l2->next);
        }
        return head;
    }
};