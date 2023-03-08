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
//     void traversal(TreeNode*root,int d, map<int,vector<int>>& m){
//         if(root==NULL){
//             return;
//         }
//         m[d].push_back(root->val);
//         traversal(root->left,d-1,m);
//         traversal(root->right,d+1,m);
//     }
    
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         vector<vector<int>> ans;
//         map<int,vector<int>> m;
//         int d = 0;
//         traversal(root, d, m);
        
//         for(auto it : m){
//             ans.push_back(it.second);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> mp;
        vector<vector<int>> ans;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            root=q.front().first;
            int x=q.front().second.first,y=q.front().second.second;q.pop();
            mp[x][y].insert(root->val);
            if(root->left) q.push({root->left,{x-1,y+1}});
            if(root->right) q.push({root->right,{x+1,y+1}});
        }
        for(auto x:mp){
            vector<int> col;
            for(auto y:x.second){
                for(auto ele:y.second) col.push_back(ele);
            }
            ans.push_back(col);
        }
        return ans;
    }
};