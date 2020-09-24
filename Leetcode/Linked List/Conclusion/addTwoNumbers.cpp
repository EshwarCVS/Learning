// https://leetcode.com/explore/learn/card/linked-list/213/conclusion/1228/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL;
        ListNode* temp;
        ListNode* prev = NULL;
        int carry =0;
        int sum = 0;
        while(l1 != NULL || l2 != NULL){
            sum = carry + (l1 ? l1->val :0) + (l2 ? l2->val :0);
            carry = (sum >= 10 ? 1 : 0);
            sum = sum % 10;
            temp = new ListNode(sum);
            if(result == NULL)
                result = temp;
            else
                prev -> next = temp;
            prev = temp;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry > 0)
            prev->next = new ListNode(carry);
        return result;
        
    }
};
