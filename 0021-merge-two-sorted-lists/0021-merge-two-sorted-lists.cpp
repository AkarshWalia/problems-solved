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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode* h1= list1;
        ListNode* h2= list2;
        
        if(list1 == NULL){
            return list2;
        }
           if(list2 == NULL){
            return list1;
        }
        
        if(list1->val > list2 -> val){
            std::swap(list1,list2);
        }
        ListNode* ans = list1;
        
        while(list1 !=NULL && list2!=NULL){
            
            ListNode* temp = NULL;
            
            while(list1!= NULL && list1->val > list2->val ){
                temp = list1;
                list1= list1->next;
            }
            
            temp-> next  = list2;
            std:swap(list1,list2);
            
        }
        
        
        return ans;
        
    }
}; */


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        if(l1 == NULL)
        {
            return l2;
        }
        if(l2 == NULL)
        {
            return l1;
        }
        
        if(l1->val <= l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};

