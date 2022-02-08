int intersectPoint(Node* head1, Node* head2)
{
    int n=0,m=0,diff;
    Node* i=head1;
    Node* j=head2;
    while(i!=NULL){
        n++;
        i=i->next;
    }
    while(j!=NULL){
        m++;
        j=j->next;
    }
    diff=abs(n-m);
    i=head1;
    j=head2;
    if(n>=m){
        for(int k=0;k<diff;k++) i=i->next;
    }
    else{
        for(int k=0;k<diff;k++) j=j->next;
    }
        
    while(i!=NULL){
        if(i->next==j->next){
            return i->next->data;
        }
        i=i->next;
        j=j->next;
    }
    
}
