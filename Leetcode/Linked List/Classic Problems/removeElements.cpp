// https://leetcode.com/explore/learn/card/linked-list/219/classic-problems/1207/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = new ListNode(-1, head);
        head = prev;
        while(curr){
            if(curr->val == val){
                prev -> next = curr -> next;
                curr = curr -> next;
                continue;
            }
            curr = curr -> next;
            prev = prev ->next;
        }
        return head -> next;
    }
};
