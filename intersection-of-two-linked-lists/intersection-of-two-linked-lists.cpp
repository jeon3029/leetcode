/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* A = headA;
        int lenA = 0;
        while(A!=nullptr){
            lenA++;
            A = A->next;
        }
        ListNode* B = headB;
        int lenB = 0;
        while(B!=nullptr){
            lenB++;
            B = B->next;
        }
        if(lenA>lenB){
            for(int i=0;i<lenA-lenB;i++){
                headA = headA->next;
            }
        }
        else{
            for(int i=0;i<lenB-lenA;i++){
                headB = headB->next;
            }
        }
        while(headA!=headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
       
    }
};