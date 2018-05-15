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
    /**
     * @param root: A Tree
     * @return: A list of lists of integer include the zigzag level order traversal of its nodes' values.
     */
    vector<vector<int>> zigzagLevelOrder(TreeNode * root) {
        // write your code here
        vector<vector<int>> result;
        queue<TreeNode*> nodes;
        vector<int> tmp;
        if(root==NULL) return result;
        int layer=1;
        nodes.push(root);
        while(nodes.size())
        {
            int i=nodes.size();
            int j=0;
            while(j<i)
            {
                TreeNode* node=nodes.front();
                tmp.push_back(node->val);
                nodes.pop();
                if(node->left)
                    nodes.push(node->left);
                if(node->right)
                    nodes.push(node->right);
                j++;
            }
            if(layer%2==0)
            {
               reverse(tmp.begin(),tmp.end());
            }
            result.push_back(tmp);
            layer++;
            tmp.clear();
        }
        return result;
    }
};