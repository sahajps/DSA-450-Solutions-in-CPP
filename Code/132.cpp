class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        int n=1e6+1;
        int arr[n];
        for(int i=0;i<n;i++) arr[i]=0;
        Node* tmp=head;
        while(tmp!=NULL){
            arr[tmp->data]++;
            tmp=tmp->next;
        }
        tmp=head;
        Node* prev;
        //cout<<arr[5]<<"  "<<arr[2]<<"  "<<arr[4]<<endl;
        while(tmp!=NULL){
            if(arr[tmp->data]){ 
                prev=tmp;
                arr[tmp->data]=0;
            }
            else{
                prev->next=prev->next->next;
            }
            tmp=tmp->next;
        }
        return head;
    }
};
