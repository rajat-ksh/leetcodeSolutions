class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *li=NULL;
        ListNode *temp=NULL,*pre=NULL;
        int carry=0;
        int sum=0;
        while(l1 || l2){
            int a=0;
            int b=0;
            if(l1){
                a=l1->val;
                l1=l1->next;
            }
            if(l2){
                b=l2->val;
                l2=l2->next;}

            int x=a+b+carry;
            carry=0;
                if(x>9){
                    carry=1;
                    x%=10;
                }
            ListNode *temp= new ListNode(x);



            if(li==NULL){
                li=temp;
                pre=li;}
            else{
                pre->next=temp;
                pre=temp;
            }

        }

        if(carry){
            ListNode *temp= new ListNode(1);
            pre->next=temp;

        }

        return li;
    }
};
