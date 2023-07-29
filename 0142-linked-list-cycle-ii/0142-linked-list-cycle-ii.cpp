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
    ListNode *detectCycle(ListNode *head) {
       ListNode * slow =head;
       ListNode * fast = head;
      
        if(head == NULL || head->next ==NULL){
            return NULL ;
        }
        bool iscycle =false;
     while(slow && fast && fast->next){
         // if(fast->next == NULL && fast->next->next ==NULL) return NULL;
         slow =slow->next;
         fast =fast->next->next;
         if(slow == fast){
             iscycle =true;
             break;
         }
         
     }
        if(!iscycle) return NULL;
        
        fast =head;
        
        while(slow!= fast){
            slow =slow->next;
            fast = fast->next;
        }
        
        return fast;
    }
};