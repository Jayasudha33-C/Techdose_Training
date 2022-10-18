#include<bits/stdc++.h> 
using namespace std; 
class Node { 
    public: 
        int data; 
        Node *next;  
        Node(int data){ 
            this->data = data; 
            this->next = NULL; 
        } 
};  
class Stack{   
    Node *top;   
    public: 
        void push(int data){ 
            if (top == NULL) { 
                top = new Node(data); 
                return; 
            } 
            Node *s = new Node(data); 
            s->next = top; 
            top = s; 
        } 
        Node* pop(){ 
            Node *s = top; 
            top = top->next; 
            return s; 
        } 
       void display(){ 
            Node *s = top; 
            while (s != NULL) { 
                cout << s->data << " "; 
                s = s->next; 
            } 
            cout << endl; 
        } 
        void reverse(){ 
            Node *prev, *cur, *succ; 
            cur = prev = top; 
            cur = cur->next; 
            prev->next = NULL; 
            while (cur != NULL) { 
                succ = cur->next; 
                cur->next = prev; 
                prev = cur; 
                cur = succ; 
            } 
            top = prev; 
        } 
};  
int main(){ 
    Stack *s = new Stack();   
    s->push(1); 
    s->push(2); 
    s->push(3); 
    s->push(4);
    s->push(5);
    s->reverse(); 
    s->display(); 
    return 0; 
}