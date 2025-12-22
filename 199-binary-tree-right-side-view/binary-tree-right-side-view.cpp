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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        vector<int>ans;
        if(!root){
            return ans;
        }
        q1.push(root);
        while(!q1.empty() || !q2.empty()){
            int s=q1.size();
            for(int i=0;i<s;i++){
               TreeNode* node=q1.front();
               q1.pop();
               if(node->left){
                q2.push(node->left);
               }
               if(node->right){
                q2.push(node->right);
               }
               if(q1.empty()){
                ans.push_back(node->val);
               }
            }
            int s2=q2.size();
            for(int i=0;i<s2;i++){
               TreeNode* node=q2.front();
               q2.pop();
               if(node->left){
                q1.push(node->left);
               }
               if(node->right){
                q1.push(node->right);
               }
               if(q2.empty()){
                ans.push_back(node->val);
               }
            }
        }
        return ans;
    }
};