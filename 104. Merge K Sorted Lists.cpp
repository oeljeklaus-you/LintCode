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
    ListNode *merge(ListNode *list1,ListNode *list2)
    {
        if(list1==NULL)
        {
            return list2;
        }else if(list2==NULL) return list1;
        ListNode *head=NULL;
        if(list1->val>list2->val)
        {
            head=list2;
            head->next=merge(list1,list2->next);
        }
        else
        {
            head=list1;
            head->next=merge(list1->next,list2);
        }
        return head;
    }
    /**
     * @param lists: a list of ListNode
     * @return: The head of one sorted list.
     */
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        // write your code here
        //if(lists.size()==0) return  NULL;
        ListNode *head=NULL;
        for(int i=0;i<lists.size();i++)
        {
            head=merge(head,lists[i]);
        }
        return head;
    }
};


