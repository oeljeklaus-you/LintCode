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
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    ListNode * addLists(ListNode * l1, ListNode * l2) {
        // write your code here
        if(l1==NULL) return l2;
        else if(l2==NULL) return l1;
        int num=0;
        ListNode *p1=l1;
        ListNode *p2=l2;
        ListNode *head=l1;
        ListNode *tail=NULL;
        ListNode *tail2=NULL;
        while(p1&&p2)
        {
            int a=p1->val;
            p1->val=(a+p2->val+num)%10;
            num=(a+p2->val+num)/10;
            tail=p1;
            tail2=p2;
            p1=p1->next;
            p2=p2->next;
        }
        if(p1)
        {
            while(p1)
            {
                int a=p1->val;
                p1->val=(a+num)%10;
                num=(a+num)/10;
                tail=p1;
                p1=p1->next;
            }
        }
        if(p2)
        {
            tail->next=p2;
             while(p2)
            {
                int a=p2->val;
                p2->val=(a+num)%10;
                num=(a+num)/10;
                tail=p2;
                p2=p2->next;
            }
           
               
        }
         if(num)
        {
                 tail->next=new ListNode(num);
                 num=0;
        }
        return head;
    }
};