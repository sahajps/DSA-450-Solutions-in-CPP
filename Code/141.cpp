bool isCircular(Node *head)
{
    Node* tmp=head;
    while(tmp->next!=head and tmp->next!=NULL) tmp=tmp->next;
    if(tmp->next==head) return true;
    else return false;
}
