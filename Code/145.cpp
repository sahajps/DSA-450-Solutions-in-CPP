Node* reverseDLL(Node * head)
{
    Node* i;Node* j;
    Node* tmp=head;
    int n=1;
    while(tmp->next!=NULL){
        tmp=tmp->next;
        n++;
    }
    
    i=head;
    j=tmp;
    n=n/2;
    int swp;
    while(n--){
        swp=i->data;
        i->data=j->data;
        j->data=swp;
        
        i=i->next;
        j=j->prev;
    }
    
    return head;
}
