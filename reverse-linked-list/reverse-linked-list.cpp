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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr)return head;
        ListNode* cur = head;
        ListNode* answer = new ListNode(cur->val);
        while(cur!=nullptr){
            if(cur->next!=nullptr){
                ListNode* temp = new ListNode(cur->next->val,answer);
                answer=temp;
            }
            cur=cur->next;
        }
        return answer;
    }
};