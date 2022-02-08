class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* tmp=head;
        while(tmp!=NULL){
            cnt++;
            tmp=tmp->next;
        }
        
        tmp=head;
        cnt=cnt/2;
        
        while(cnt--){
            tmp=tmp->next;
        }
        
        return tmp;
    }
};
