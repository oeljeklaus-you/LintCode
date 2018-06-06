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
     * @param root: the root of the binary tree
     * @return: all root-to-leaf paths
     */

    void helper(TreeNode *root,vector<string> &result,vector<int> &path,char c[])
	{
    	path.push_back(root->val);
    	if(root->left==NULL&&root->right==NULL)
    	{
       	 	string s="";
        	for(int i=0;i<path.size();i++)
        	{
            	sprintf(c,"%d",path[i]);
            	s+=c;
            	if(i!=path.size()-1)
            	{
               		s.push_back('-');
                	s.push_back('>');
            	}
        	}
        	result.push_back(s);
        	path.pop_back();
        	return;
    	}
    	if(root->left!=NULL)
        	helper(root->left,result,path,c);
    	if(root->right!=NULL)
        	helper(root->right,result,path,c);
    	path.pop_back();
	}

	vector<string> binaryTreePaths(TreeNode * root) {
    	// write your code haere
    	vector<string> result;
    	if(root==NULL) return result;
    	vector<int> path;
    	char c[1000];
    	helper(root,result,path,c);
    	return result;
	}
};