// https://leetcode.com/explore/learn/card/linked-list/213/conclusion/1295/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return nullptr;
        ListNode* tail = head;
        int length = 1;
        while(tail->next != NULL){
            tail = tail ->next;
            length++;
        }
        tail->next = head;
        k = k % length;
        length = length - k;
        while(length>0){
            head = head ->next;
            tail = tail ->next;
            cout<<length<<endl;
            length --;
        }
        tail->next = NULL;
        return head;
    }
};
