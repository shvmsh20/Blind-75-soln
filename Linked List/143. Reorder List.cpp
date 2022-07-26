void reorderList(ListNode* head) {
        //reverse 2nd half
        ListNode* slow = head, *fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* l2 = slow->next, *prev = nullptr, *l1 = head;
        slow->next = nullptr;
        while(l2){
            ListNode* temp = l2->next;
            l2->next = prev;
            prev = l2;
            l2 = temp;
        }
        l2 = prev;
        //merge
        while(l2){
            ListNode* t1 = l1->next, *t2 = l2->next;
            l1->next = l2;
            l2->next = t1;
            l1 = t1;
            l2 = t2;
        }
       
    }