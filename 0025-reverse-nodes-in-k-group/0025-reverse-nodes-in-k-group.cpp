













class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
		// first, find the (k+1)-th node, that is the node for the next group
		// if the nodes remained is smaller than k, just return
	
        ListNode* node = head;
        for(int i=0;i<k;i++) {
            if(!node) return head;
            node = node->next;
        }   
        
		// Like problem in `reverse-linked-list` (https://leetcode.com/problems/reverse-linked-list/)
		// Instead, compute next group first
        ListNode* cur = reverseKGroup(node, k);
        while(head != node) {
            ListNode* next = head->next;
            head->next = cur;
            cur = head;
            head = next;
        }
        return cur;
    }
};