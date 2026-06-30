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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        
        int count=0;
        while(fast)
        {
            count++;
            fast=fast->next;
        }
        fast=head;
        if(count==n)
        {
            head=fast->next;
            delete(fast);
            return head;
        }
        for(int i=1;i<count-n;i++)
        {
            fast=fast->next;
        }
        
        ListNode* todelete=fast->next;
        
        
        fast->next=todelete->next;
        delete(todelete);
        return head;


        
    }
};
