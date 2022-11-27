/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 
  ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return NULL;
        }
        
        
            
        ListNode* temp = head;
        ListNode* prev=NULL;
        int len =0;
        int i= 1;
        if(len == n) return head -> next; 
        
        else{
            
        
        // find length of linked list
        while(temp!= NULL){
            temp=temp->next;
            len++;
            }
        // srial no of list to be removed ....len-n
        // iterate over serrial no
        // remove using pointers.
         for( temp=head   ; i< len - n +1;i++){
            prev = temp;
            temp = temp->next;
         }
        
        prev->next = temp->next;
        temp->next = NULL;
        
        return head;
 
 
 

}
 */
class Solution {
public:
    
 ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode* iter = head;
	int len = 0, i = 1;
	while(iter) iter = iter -> next, len++;    // finding the length of linked list
	if(len == n) return head -> next;          // if head itself is to be deleted, just return head -> next
	for(iter = head; i < len - n; i++) iter = iter -> next; // iterate first len-n nodes
	iter -> next = iter -> next -> next;      // remove the nth node from the end
	return head;
        
            
        }
        
    };
