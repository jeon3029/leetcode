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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* sum = new ListNode();
        ListNode* cur = sum;
        while(l1 && l2){
            int temp = l1->val + l2->val + carry;
            carry = 0;
            if(temp>=10){
                carry = 1;
                temp-=10;
            }
            cur->val = temp;
            
            cur->next = new ListNode();
            cur=cur->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int temp = l1->val+carry;
            carry=0;
            if(temp>=10){
                carry=1;temp-=10;
            }
            cur->val=temp;
            cur->next = new ListNode();
            cur=cur->next;
            l1=l1->next;
        }
        while(l2){
            int temp = l2->val+carry;
            carry=0;
            if(temp>=10){
                carry=1;temp-=10;
            }
            cur->val=temp;
            cur->next = new ListNode();
            cur=cur->next;
            l2=l2->next;
        }
        if(carry){
            cur->val = carry;
        }
        else{
            ListNode*temp = sum;
            while(temp){
                if(temp->next==cur){
                    temp->next=nullptr;
                    break;
                }
                temp=temp->next;
            }
        }
        return sum;
    }
};