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
      result.push_back(root->val);
      preOrder(root->left,result);
      preOrder(root->right,result);
  }
    /**
     * @param root: A Tree
     * @return: Preorder in ArrayList which contains node values.
     */
    vector<int> preorderTraversal(TreeNode * root) {
        // write your code here
        vector<int> result;
        preOrder(root,result);
        return result;
    }
};