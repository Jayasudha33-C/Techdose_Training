class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL;
        ListNode* temp = NULL;
        ListNode* curr = slow;
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        while(prev && head){
            if(prev->val !=head->val) return false;
            prev=prev->next;
            head=head->next;
        }
        return true;
    }
};