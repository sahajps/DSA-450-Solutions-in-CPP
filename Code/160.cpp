int getNthFromLast(Node *head, int n)
{
    int s=0;
    Node* tmp=head;
    while(tmp!=NULL){
        tmp=tmp->next;
        s++;
    }
    tmp=head;
    s=s-n;
    if(s<0) return -1;
    while(s--){
        tmp=tmp->next;
    }
    return tmp->data;
}
