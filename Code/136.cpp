Node* findIntersection(Node* i, Node* j)
{
    Node* ans=NULL;
    while(i!=NULL and j!=NULL){
        if(i->data==j->data){
            if(ans==NULL){
                ans=new Node(i->data);
            }
            else{
                Node* tmp=ans;
                while(tmp->next!=NULL) tmp=tmp->next;
                tmp->next=new Node(i->data);
            }
            i=i->next;
            j=j->next;
        }
        else if(i->data<j->data){
            i=i->next;
        }
        else{
            j=j->next;
        }
    }
    return ans;
}
