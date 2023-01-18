/*Given a singly linked list of N nodes.
Find the first node of the loop if the linked list has a loop. If a loop is present return the node data of the first node of the loop else return -1 */



int findFirstNode(Node* head)
    {
       if(head->next==NULL)
            return -1;
        if(head->next==head) return head->data;
        
        Node* fast=head;
        Node* slow=head;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow->data;
            }
        }
        return -1;
    }
