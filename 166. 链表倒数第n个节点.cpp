/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode * nthToLast(ListNode * head, int n) {
        // write your code here
        ListNode* p1=head;
        ListNode* p2=head;
        int i=0;
        while(i<n)
        {
            p1=p1->next;
            i++;
        }
        while(p1)
        {
            p1=p1->next;
            p2=p2->next;
        }
        return p2;
    }
};