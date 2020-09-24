// https://leetcode.com/explore/learn/card/linked-list/213/conclusion/1225/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL) return head;
        Node* curr = head;
        while(curr != NULL){
            if(curr->child == NULL)
                curr = curr -> next;
            else{
                Node* fast = curr->next;
                Node* down = curr->child;
                curr->next = down;
                down->prev = curr;
                curr->child = NULL;
                while(down-> next !=NULL){
                    down = down->next;
                }
                down->next = fast;
                if(fast !=NULL){
                    fast->prev = down;
                }
            }
        }
        return head;
    }
};
