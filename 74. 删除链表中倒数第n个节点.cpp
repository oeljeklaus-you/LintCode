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
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: The head of linked list.
     */
    ListNode * removeNthFromEnd(ListNode * head, int n) {
        // write your code here
        if(head==NULL) return NULL;
        int i=0;
        ListNode* p1=head;
        ListNode* p2=head;
        ListNode* prev=NULL;
        while(i<n)
        {
            p1=p1->next;
            i++;
        }
        while(p1)
        {
            p1=p1->next;
            prev=p2;
            p2=p2->next;
        }
        if(p2==head) return p2->next;
        prev->next=p2->next;
        return head;
    }
};