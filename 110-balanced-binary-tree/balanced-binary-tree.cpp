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
    int getHeight(TreeNode* root){
        queue<TreeNode*>q;
        if(!root){
            return 0;
        }
        q.push(root);
        int height=0;
        while(!q.empty()){ 
            int n=q.size();
            for(int i=0;i<n;i++){
            TreeNode* node=q.front();
            q.pop();
            if(node->left){
               q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
            }
            height++;
        }
        return height;
    }
    bool isBalanced(TreeNode* root) {
        TreeNode* node=root;
        if(!root){
            return true;
        }
        int left=getHeight(node->left);
        int right=getHeight(node->right);

        if(abs(left-right)>1){
            return false;        
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};