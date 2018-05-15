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
    /*
     * @param root: The root of the binary search tree.
     * @param A: A TreeNode in a Binary.
     * @param B: A TreeNode in a Binary.
     * @return: Return the least common ancestor(LCA) of the two nodes.
     */
     
    bool findNodePath(TreeNode *root,TreeNode *target,vector<TreeNode*> &paths)
    {
        paths.push_back(root);
        if(root==target)
        {
            return true;
        }
        bool flag=false;
        vector<TreeNode*> kids;
        if(root->left) kids.push_back(root->left);
        if(root->right) kids.push_back(root->right);
        vector<TreeNode*>::iterator it=kids.begin();
        while(!flag&&it!=kids.end())
        {
            flag=findNodePath(*it,target,paths);
            it++;
        }
        if(!flag) paths.pop_back();
        return  flag;
    }
    
    TreeNode* findCommonNode(vector<TreeNode*> &path1,vector<TreeNode*> &path2)
    {
        
         vector<TreeNode*>::iterator it1=path1.begin();
         vector<TreeNode*>::iterator it2=path2.begin();
         TreeNode* result=NULL;
         while(it1!=path1.end()&&it2!=path2.end())
         {
             if(*it1==*it2) result=*it1;
             it1++;
             it2++;
         }
         return result;
    }
    
    TreeNode * lowestCommonAncestor(TreeNode * root, TreeNode * A, TreeNode * B) {
        // write your code here
        vector<TreeNode*> path1;
        findNodePath(root,A,path1);
        vector<TreeNode*> path2;
        findNodePath(root,B,path2);
        return findCommonNode(path1,path2);;
    }
};