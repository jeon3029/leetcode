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
        stack<int> s;
        int len = 0;
        ListNode* n = head;
        while(n){
            n=n->next;
            len++;
        }
        n=head;
        for(int i=0;i<len/2;i++){
            s.push(n->val);
            n=n->next;
        }
        if(len%2==1){
            n=n->next;
        }
        for(int i=0;i<len/2;i++){
            int top = s.top();
            if(n->val!=top)return false;
            s.pop();
            n=n->next;
        }
        return true;
    }
};