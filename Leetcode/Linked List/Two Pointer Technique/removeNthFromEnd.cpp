// https://leetcode.com/explore/learn/card/linked-list/214/two-pointer-technique/1296/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n <= 0 ){
            return head;
        }
        auto slow = &head;
        ListNode* fast = head;
        while(n--){
            fast = fast -> next;
        }
        while(fast){
            slow = &(*slow) ->next;
            fast = fast -> next;
        }
        fast = *slow;
        *slow = (*slow)->next;
        delete fast;   
        return head;
    }
};
