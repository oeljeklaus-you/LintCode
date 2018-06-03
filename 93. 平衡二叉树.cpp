class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: True if this Binary tree is Balanced, or false.
     */
	
	//这个方法只是遍历了一次
	bool isBalancedHelper(TreeNode *root,int *depth)
	{
		if(root==NULL)
		{
			*depth=0;
			return true;
		}
		int left,right;
		if(isBalancedHelper(root->left,&left)&&isBalancedHelper(root->right,&right))
		{
			int diff=left-right;
			if(diff<=1&&diff>=-1)
			{
				*depth=1+(left>right?left:right);
				return true;
			}
		}
		return false;
	}

	 bool isBalanced(TreeNode * root) {
	 	int depth;
	 	return isBalancedHelper(root,&depth);
      }

};