// https://leetcode.com/explore/learn/card/linked-list/214/two-pointer-technique/1215/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)
            return NULL;
        int lenA=0, lenB=0;
        ListNode *A = headA;
        ListNode *B = headB;
        while(A->next != NULL){
            A=A->next;
            lenA++;
        }
        while(B->next != NULL){
            B=B->next;
            lenB++;
        }
        int d = abs(lenA - lenB);
        A = headA;
        B = headB;
        if(lenA > lenB){
            while(d--){
                A = A->next;
            }
        }
        if(lenB > lenA){
            while(d--){
                B=B->next;
            }
        }
        if(A == B)
                return A;
        while(A != B){
            A = A->next;
            B = B->next;
            if(A == B)
                return A;
        }
        return NULL;
    }
};
