// https://leetcode.com/explore/learn/card/linked-list/219/classic-problems/1209/

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
    bool isPalindrome(ListNode* head) {
        if(head == NULL)
            return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast != NULL){
            fast = fast->next;
            if(fast){
                slow = slow->next;
                fast = fast->next;
            }
        }
        ListNode* prev = nullptr;
        while (slow) {
            auto temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        slow = head;
        while (slow && prev) {
            cout<< slow->val<<" "<< prev->val<<endl;
            if (slow->val != prev->val) { return false; }
            slow = slow->next, prev = prev->next;
        }
        return true;
        
    }
};
