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
    int maxDepth(TreeNode* root) {
        TreeNode* temp=root;
        queue<TreeNode*>q;

        if(temp==NULL){
            return 0;
        }

        int height=0;

        q.push(temp);

        while(!q.empty()){
            int s=q.size();

            for(int i=0;i<s;i++){
                TreeNode* temp2=q.front();

                if(temp2->left){
                    q.push(temp2->left);
                }

                if(temp2->right){
                    q.push(temp2->right);
                }
                q.pop();
            }
            height++;
        }

        return height;
    }
};