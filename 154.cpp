class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        Node* tmp=head;
        int c0=0,c1=0,c2=0;
        while(tmp!=NULL){
            switch(tmp->data){
                case 0:
                    c0++;
                    break;
                case 1:
                    c1++;
                    break;
                case 2:
                    c2++;
                    break;
            }
            tmp=tmp->next;
        }
        tmp=head;
        while(c0--){
            tmp->data=0;
            tmp=tmp->next;
        }
        while(c1--){
            tmp->data=1;
            tmp=tmp->next;
        }
        while(c2--){
            tmp->data=2;
            tmp=tmp->next;
        }
        return head;
    }
};
