class Solution {
public:
ListNode* FindNode(ListNode* head,int cnt)
{
    if(cnt==0)
      return head;
    int k=1;
    ListNode* temp=head;
    while(temp!=NULL)
    {
        if(cnt==k)
           return temp;
       k++;
        temp=temp->next;
    }
    return temp;

}
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0||head==NULL)
            return head;
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            len++;
        }
        
         k=k%len;
         
        int cnt=len-k;
        temp->next=head;
        ListNode* newhead=FindNode(head,cnt);
       head=newhead->next;
       newhead->next=NULL;

       return head;
       


    }
};