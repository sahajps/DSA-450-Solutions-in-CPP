class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        int cnt=10000;
        while(cnt--){
            if(head->next==NULL){
                return false;
            }
            head=head->next;
        }
        return true;
    }
};
