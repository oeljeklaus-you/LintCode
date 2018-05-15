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
     * @return: Level order a list of lists of integer
     */
    vector<vector<int>> levelOrder(TreeNode * root) {
        // write your code here
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> nodes;
        nodes.push(root);
        int i=0;
        vector<int> tmp;
        while(nodes.size())
        {
            i=nodes.size();
            int j=0;
            while(j<i)
            {
                TreeNode* t=nodes.front();
                tmp.push_back(t->val);
                j++;
                nodes.pop();
                if(t->left)
                    nodes.push(t->left);
                if(t->right)
                    nodes.push(t->right);
            }
            result.push_back(tmp);
            tmp.clear();
        }        
        return result;
    }
};