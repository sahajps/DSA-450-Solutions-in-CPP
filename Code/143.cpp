class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        stack<int> ans;
        int n=0;
        Node* tmp=head;
        while(tmp!=NULL){
            tmp=tmp->next;
            n++;
        }
        tmp=head;
        for(int i=0;i<n/2;i++){
            ans.push(tmp->data);
            tmp=tmp->next;
        }
        if(n%2!=0) tmp=tmp->next;
        
        while(!ans.empty() and tmp!=NULL and ans.top()==tmp->data){
            ans.pop();
            tmp=tmp->next;
        }
        if(ans.empty() and tmp==NULL) return true;
        return false;
    }
};
