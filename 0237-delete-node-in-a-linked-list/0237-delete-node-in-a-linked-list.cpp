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
    void deleteNode(ListNode* node) {
   
         ListNode*h1;
        node->val=node->next->val;
        h1=node->next;
        node->next=node->next->next;
        delete h1;
        
        
    }
};

