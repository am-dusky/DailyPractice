ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
            return NULL;
        //ListNode* prev=head;
        ListNode* slow=head;
        ListNode* fast=head->next->next;
        
        while(fast and fast->next){
            //prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
    }
