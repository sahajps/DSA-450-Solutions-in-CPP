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
    
    Node *compute(Node *head)
    {
        head=revLL(head);
        int maxi=head->data;
        Node* tmp=head;
        while(tmp!=NULL and tmp->next!=NULL){
            if(tmp->next->data<maxi){
                tmp->next=tmp->next->next;
            }
            else{
                maxi=tmp->next->data;
                tmp=tmp->next;
            }
        }
        
        
        head=revLL(head);
        return head;
    }
    
};
