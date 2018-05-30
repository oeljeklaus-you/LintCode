class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: The head of linked list.
     */
    ListNode * insertionSortList(ListNode * head) {
        // write your code here
  		if(head==NULL) return NULL;
  		ListNode* newHead=head;
  		ListNode* q=head;
  		ListNode* p=head->next;
  		ListNode* prev=NULL;
  		ListNode* t=NULL;
  		q->next=NULL;
  		newHead->next=NULL;
  		while(p)
  		{
  			while(newHead)
  			{
  				if(newHead->val<=p->val)
  				{
  					prev=newHead;
  					newHead=newHead->next;
  				}	
  				else
  					break;
  			}
  			t=p->next;
  			if(prev==NULL)
  			{
  				p->next=q;
  				q=p;
  				
  			}
  			else
  			{
  				prev->next=p;
  				p->next=newHead;
  			}
  			newHead=q;
  			prev=NULL;
  			p=t;
  		}  
  		return q;
    }
};