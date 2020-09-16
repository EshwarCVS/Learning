// https://leetcode.com/explore/learn/card/linked-list/214/two-pointer-technique/1214/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr)
        {
            return nullptr;
        }
        
        ListNode* slow=head,*fast=head;
        do
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        while(fast && fast->next && fast!=slow);
            
        if(fast!=slow)
        {
            return nullptr;
        }
        
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        return slow;
    }
};
