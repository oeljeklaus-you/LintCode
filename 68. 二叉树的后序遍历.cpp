/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
void preOrder(TreeNode *root,vector<int> &result)
  {
      if(root==NULL) return;
      
      preOrder(root->left,result);
      
      preOrder(root->right,result);
      result.push_back(root->val);
  }
    /**
     * @param root: A Tree
     * @return: Postorder in ArrayList which contains node values.
     */
    vector<int> postorderTraversal(TreeNode * root) {
        // write your code here
        vector<int> result;
        preOrder(root,result);
        return result;
    }
};