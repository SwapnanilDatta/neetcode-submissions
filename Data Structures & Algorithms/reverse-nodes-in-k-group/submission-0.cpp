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
private:
    ListNode *getKth(ListNode *curr,int k)
    {
        while(k && curr)
        {
            curr=curr->next;
            k-=1;
        }
        return curr;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0, head);

        ListNode *groupprev=dummy;
        while (true)
        {
            ListNode *kth=getKth(groupprev,k);
            if(!kth)
            {
                break;
            }
            ListNode *groupnext=kth->next;
            ListNode *curr=groupprev->next;
            ListNode *prev=kth->next;
            while(curr!=groupnext)
            {
                ListNode* temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;
            }
            ListNode *temp=groupprev->next;
            groupprev->next=kth;
            groupprev=temp;
        }
        return dummy->next;

        
    }
};
