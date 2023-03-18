/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     int findminfromright(TreeNode* root){
//         while(root->left!=nullptr)
//             root=root->left;
//         return root->val;
//     }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root==nullptr) return root;
//         else if(root->val>key) root->left=deleteNode(root->left,key);
//         else if(root->val<key) root->right=deleteNode(root->right,key);
//         else{
//             if(root->right==nullptr){
//                 return root->left;
//             }else if(root->left==nullptr){
//                 return root->right;
//             }else{
// 			    //replace the root value by find the minimum val from right side 
//                 root->val=findminfromright(root->right);
//                 root->right = deleteNode(root->right, root->val);
//             }
//         }
//         return root;
//     }
   
// };
class Solution {
public:
    int findminfromright(TreeNode* root){
        while(root->left!=nullptr)
            root=root->left;
        return root->val;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
           
        if(root->val == key){
             if(root->right==nullptr){
                return root->left;
            }else if(root->left==nullptr){
                return root->right;
            }else{
			   
                root->val=findminfromright(root->right);
                root->right = deleteNode(root->right, root->val);
            }
        }
        else if(root->val>key) root->left=deleteNode(root->left,key);
        else if(root->val<key) root->right=deleteNode(root->right,key);
        
        
       return root;
        }
    
};