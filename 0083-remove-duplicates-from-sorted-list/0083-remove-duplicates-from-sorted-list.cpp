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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*  prev =NULL;
        ListNode*  current =head;
        if(head==NULL){
            return NULL;
        }
        if(head->next == NULL){
        return head;    
        }   
        ListNode*  frwd =head->next;
        while(frwd != NULL){
            if(current->val ==frwd->val){
                current->next = frwd -> next;
                frwd->next = NULL;
                frwd = current->next;
                 }
            else{
                current = frwd;
                frwd = frwd->next;
                
                }
            
        }
        return head;
        
        
    }
};