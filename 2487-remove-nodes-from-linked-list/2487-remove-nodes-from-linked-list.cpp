/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode*temp = head;
        ListNode* tail = NULL;
        int maxi =INT_MIN;
        vector<int>v;
        vector<int>s;
        while(temp!=NULL){
            tail = temp;
            v.push_back(temp->val);
            temp=temp->next;
            
        }
        temp = head;
        
        for(int i=v.size()-1;i>=0;i--){
            maxi = max(maxi,v[i]);
            if(v[i]>=maxi){
               s.push_back(v[i]); 
            }
        }
        reverse(s.begin(),s.end());
        
        ListNode* a = new Node()
        
    }
};

*/

class Solution {
public:
    ListNode* reverse(ListNode* head) {
       ListNode* curr=head;
        ListNode * prev=NULL;
        ListNode * next1=NULL;
        while(curr != NULL){
        next1=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next1;
        }
        return prev ;
    }
    ListNode* removeNodes(ListNode* head) {
      head=reverse(head);
      ListNode* curr=head;
      ListNode* prev=NULL;
      int maxi=head->val;
      while(curr != NULL){
      maxi=max(maxi,curr->val);
      if(maxi > curr->val){
          prev->next=prev->next->next;
      }
          else 
          prev = curr;
          
          curr=curr->next;
      }
     return reverse(head);
      
    }
};