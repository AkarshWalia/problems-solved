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
    ListNode* partition(ListNode* head, int x) {
        ListNode* less = new ListNode(-1);
        ListNode* high = new ListNode(-1);
         ListNode* less_head =less;
         ListNode* high_head =high;


      while(head){
          if(head->val >= x){
              high->next = head;
              high =high->next;
          }
          else{
              less->next = head;
              less =less->next;
          }
          
          head =head->next;
      }
        high ->next = NULL;
        less->next = high_head->next;
        return less_head->next;
    }
};



