class Solution {
public:
    Node* flatten(Node* head) {
        stack<Node*>s;
        Node* curr = head;
        Node * prev = curr;
        while(curr!=NULL){
            if(curr->child!=NULL){
                if(curr->next!=NULL)
               { s.push(curr->next);
                curr->next->prev = NULL;
                }
                curr->next = curr->child;
                curr->child->prev = curr;
                curr->child = NULL;  
            }
            prev = curr;
            curr = curr->next;
        }
        while(s.empty() == false){
            curr = s.top();
            s.pop();
            prev->next = curr;
            curr->prev = prev;
            while(curr!=NULL){
                prev = curr;
                curr= curr->next;
            }
        }
        return head;
    }
};