/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *second=slow->next;
        slow->next=nullptr;
        ListNode* prev=nullptr;
        ListNode* future;
        while(second)
        {
            future=second->next;
            second->next=prev;
            prev=second;
            second=future;

        }
        //prev is now head

        ListNode* first = head;
        second = prev;
        // We only need to check 'second' because the second half 
        // will either be the same length or one node shorter than the first half.
        while (second) {
            // 1. SAVE: Secure the rest of both lists
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            // 2. WEAVE: Connect the current nodes
            
            first->next=second;
            second->next=temp1;

            // 3. ADVANCE: Move your pointers forward for the next round
           
            first=temp1;
            second=temp2;
            
        }



    }
};
