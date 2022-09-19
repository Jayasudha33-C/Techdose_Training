class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode *h = NULL, *l3 = h;
        int s, c = 0;
        while(l1!=NULL || l2!=NULL){
            int x = (l1!=NULL)? l1->val: 0;
            int y = (l2!=NULL)? l2->val: 0;
            s = x + y + c;
            c = 0;
            if(s>9) s -= 10, c = 1;
            ListNode *t = new ListNode(s);
            if(l3 == NULL){
                l3 = t;
                h = l3;
            }else{
                h->next = t;
                h = h->next;
            }
            l1 = (l1!=NULL)? l1->next : NULL;
            l2 = (l2!=NULL)? l2->next : NULL;
        }
        ListNode *Car = new ListNode(c);
        if(c) {
            h->next = Car;
        }
        return l3;
    }
};