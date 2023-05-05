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
    int getDecimalValue(ListNode* head) {
         vector<int> num;
	
        for(ListNode* temp = head; temp != NULL; temp = temp->next)
            num.push_back(temp->val);
        
        int ans = 0, base = 1;
        for(int i = num.size()-1; i>= 0; i--){
            if(num[i] == 1)
                ans += base;
            base *= 2;
        }
        
        return ans;
    }
    
};