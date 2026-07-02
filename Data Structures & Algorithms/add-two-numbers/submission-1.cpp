class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); 
        ListNode* curr = dummy;            
        
        ListNode* head = l1;
        ListNode* head2 = l2;
        int carry = 0;
        
        while(head || head2 || carry)
        {
            int value1 = head ? head->val : 0;
            int value2 = head2 ? head2->val : 0;

            int ans = value1 + value2 + carry;
            carry = ans / 10;
            
            
            curr->next = new ListNode(ans % 10);
            curr = curr->next;
            
            if(head)    head = head->next;
            if(head2)   head2 = head2->next;
        }
        
        
        return dummy->next; 
    }
};