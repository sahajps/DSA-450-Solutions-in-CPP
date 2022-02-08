Node *removeDuplicates(Node *head)
{
    Node* tmp=head;
    Node* tmp2;
    int dat;
    if(tmp!=NULL){
        dat=tmp->data;
        tmp2=tmp;
        tmp=tmp->next;
    }
    
    while(tmp!=NULL){
        if(tmp->data==dat){
            tmp2->next=tmp->next;
        }
        else{
            dat=tmp->data;
            tmp2=tmp;
        }
        tmp=tmp->next;
    }
    return head;
}
