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
        if(head == NULL)return head;
        ListNode* answer = new ListNode();
        ListNode* cur = head;
        stack<int> s;
        while(cur){
            s.push(cur->val);
            cur = cur->next;
        }
        cur = answer;
        cur->val = s.top();
        
        while(true){
            s.pop();
            if(!s.empty()){
                ListNode* temp = new ListNode();
                cur->next = temp;
                temp->val = s.top();
                cur=cur->next;
            }else{break;}
        }
        return answer;
    }
};