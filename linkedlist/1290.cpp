int getDecimalValue(ListNode* head) {
        int sum = 0;
        while (head) {
            sum = 2*sum + head->val;
            head = head->next;
        }
        return sum;
    }
