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
     * @param root: A tree
     * @return: buttom-up level order a list of lists of integer
     */
    vector<vector<int>> levelOrderBottom(TreeNode * root) {
        stack<vector<int>> tmpResult;
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> nodes;
        vector<int> tmp;
        nodes.push(root);
        int i=0;
        while(nodes.size())
        {
            i=nodes.size();
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
            tmpResult.push(tmp);
            tmp.clear();
        }
        while(tmpResult.size())
        {
            result.push_back(tmpResult.top());
            tmpResult.pop();
        }
        return result;
    }
};