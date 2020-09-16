// https://leetcode.com/explore/learn/card/linked-list/214/two-pointer-technique/1212/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        if(!head || head -> next == NULL){
            return false;
        }
        slow = slow -> next;
        fast = fast -> next -> next;
        while(fast != NULL  && fast -> next != NULL && slow != fast){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        if(fast == NULL || fast->next ==NULL){
            return false;
        }
        return true;
    }
};
