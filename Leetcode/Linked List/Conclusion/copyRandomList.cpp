// https://leetcode.com/explore/learn/card/linked-list/213/conclusion/1229/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        Node *orighead=head;
        while(head){
            Node *temp=new Node(head->val);
            temp->next=head->next;
            head->next=temp;
            head=temp->next;
        }
        head=orighead;
        Node *copy=head->next;
        while(head){
            copy->random=head->random? head->random->next : head->random;
            copy=copy->next? copy->next->next: NULL;
            head=head->next->next? head->next->next: NULL;
        }
        head=orighead;
        copy=head->next;
        Node *copyhead=copy;
        while(head){
            head->next=head->next? head->next->next: NULL;
            head=head->next;
            copy->next=copy->next? copy->next->next: NULL;
            copy=copy->next;
        }
        return copyhead;
    }
};
