class Solution
{
    public:
    Node *revLL(Node *n)
    {
        Node *curr = n;
        Node *prev = NULL;
        Node *next = NULL;
        
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=revLL(first);
        second=revLL(second);
        
        int x,carry;
        
        x=first->data+second->data;
        carry=x/10;
        x=x%10;
        
        first=first->next;
        second=second->next;
        
        Node* head=new Node(x);
        Node* copy=head;
        
        while(first!=NULL and second!=NULL){
            x=first->data+second->data+carry;
            carry=x/10;
            x=x%10;
            Node* tmp=new Node(x);
            copy->next=tmp;
            copy=copy->next;
            first=first->next;
            second=second->next;
        }
        
        while(first!=NULL){
            x=first->data+carry;
            carry=x/10;
            x=x%10;
            Node* tmp=new Node(x);
            copy->next=tmp;
            copy=copy->next;
            first=first->next;
        }
        
        while(second!=NULL){
            x=second->data+carry;
            carry=x/10;
            x=x%10;
            Node* tmp=new Node(x);
            copy->next=tmp;
            copy=copy->next;
            second=second->next;
        }
        
        if(carry!=0){
            Node* tmp=new Node(carry);
            copy->next=tmp;
        }
        
        head=revLL(head);
        
        return head;
    }
};
