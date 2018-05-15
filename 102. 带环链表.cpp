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
     * @return: True if it has a cycle, or false
     */
    bool hasCycle(ListNode * head) {
        if(head==NULL) return false;
        // write your code here
        ListNode *p1=head;
        ListNode *p2=head;
        while(p1&&p2)
        {
            p1=p1->next;
            p2=p2->next;
            if(p2!=NULL)
            {
                p2=p2->next;
                if(p1==p2) return true;
            }
            else
                return false;
            
        }
        return false;
    }
};