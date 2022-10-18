class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
            return head;
        int c=0;
        ListNode* last=head;
        while(last!=NULL)  //to count nodes
        {
            last=last->next;
            c++;
        }
        if(k<=c)
        {
            ListNode *prev=NULL,*curr=head,*nxt=NULL;
            int count=0;
            while(curr!=NULL && count<k )
            {
                nxt=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nxt;
                count++;
            }
            if(nxt!=NULL)
                head->next=reverseKGroup(nxt,k);

            return prev;
        }
        else
            return head;
    }
};