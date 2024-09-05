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
    
    Node* addOne(Node *head) 
    {
        head=revLL(head);
        Node* tmp=head;
        
        while(tmp!=NULL and tmp->next!=NULL and tmp->data==9){
            tmp->data=0;
            //carry=1;
            tmp=tmp->next;
        }
        tmp->data+=1;
        
        head=revLL(head);
        
        return head;
    }
};
