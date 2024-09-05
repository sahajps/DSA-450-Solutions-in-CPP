class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* i=head;
        Node* j=head;
        while(j!=NULL and j->next!=NULL){
            i=i->next;
            j=j->next->next;
            if(i==j){
                if(i==head){
                    while(j->next!=head){
                        j=j->next;
                    }
                    j->next=NULL;
                    return;
                }
                i=head;
                while(1){
                    while(i->next==j->next){
                        j->next=NULL;
                        return;
                    }
                    i=i->next;
                    j=j->next;
                }
            }
         }
         
    }
    
};
