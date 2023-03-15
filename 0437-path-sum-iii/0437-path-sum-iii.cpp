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
class Solution {
public:
    void solve(TreeNode* root, int targetSum, int &count ,vector<int> paths){
        if(root ==NULL){
            return;
        }
        paths.push_back(root->val);
        
        solve(root->left ,targetSum,count,paths);
        solve(root->right ,targetSum,count,paths);
        
        int len =paths.size();
        long long sum =0;
        for(int i= len -1 ;i >=0;i--){
            sum += paths[i];
            if(sum==targetSum){
                count++;
            }
        }
        paths.pop_back();

    }
    
    int pathSum(TreeNode* root, int targetSum) {
      vector<int>paths;
        int count =0 ;
        solve(root,targetSum,count,paths);
        return count;
    }
};