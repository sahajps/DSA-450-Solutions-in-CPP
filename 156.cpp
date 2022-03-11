class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
        Node* ans;int c;
        Node* x=new Node(INT_MAX);
        for(int i=0;i<K;i++){
            if(arr[i]!=NULL and arr[i]->data<=x->data){
                c=i;
                x=arr[i];
            }
        }
        arr[c]=arr[c]->next;
        ans=new Node(x->data);
        Node* tmp=ans;
        //x=x->next;
        bool flag=true;
        while(flag){
            x=new Node(INT_MAX);
            flag=false;
            for(int i=0;i<K;i++){
                if(arr[i]!=NULL and arr[i]->data<=x->data){
                    x=new Node(arr[i]->data);
                    c=i;
                    flag=true;
                }
            }
            if(flag){
                arr[c]=arr[c]->next;
                tmp->next=x;
                tmp=tmp->next;
            }
        }
        
        
        return ans;
    }
};
