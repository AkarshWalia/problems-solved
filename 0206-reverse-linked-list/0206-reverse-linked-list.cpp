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
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* forw= NULL;
        if(head ==NULL || head->next== NULL){
            return head;
        }
        
        while(current!=NULL){
            forw = current ->next;
            current->next = prev;
            prev = current;
            current = forw;
        }
        
        head =prev;
         
        return prev;
        
        
    }
};