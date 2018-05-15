/**
 * Definition of singly-linked-list:
 *
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
     * @param head: n
     * @return: The new head of reversed linked list.
     */
    ListNode * reverse(ListNode * head) {
        // write your code here
        ListNode* prev=NULL;
        ListNode* p=head;
        ListNode* q=NULL;
        while(p)
        {
            q=p;
            p=p->next;
            q->next=prev;
            prev=q;
        }
        return prev;
        
    }
};