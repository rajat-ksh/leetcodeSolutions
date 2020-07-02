class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*li=head;
        ListNode *temp=li;
        int size=0;

        while(li){
            size++;
            li=li->next;
        }

        li=head;
        int x=size-n;
        if(!x)
            return head->next;
        while(x){
            temp=li;
            li=li->next;
            x--;
        }
        cout<<li->val<<" "<<temp->val;
        temp->next=li->next;




        return head;

    }
};
