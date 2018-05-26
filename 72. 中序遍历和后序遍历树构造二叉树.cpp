class Solution {
public:

	TreeNode *buildTreeHelper(vector<int> &postorder,int start1,int end1,vector<int> &inorder,int start2,int end2)
{
    int rootValue=postorder[end1];
    TreeNode* root=new TreeNode(rootValue);
    if(start1==end1)
    {
        if(start2==end2)
            return root;
    }
    int post=end2;
    while(inorder[post]!=rootValue)
    {
        post--;
    }
    int rightLength=end2-post;
    if(rightLength>0)
    {
        root->right=buildTreeHelper(postorder,end1-rightLength,end1-1,inorder,post+1,end2);
        //root->left=buildTreeHelper(postorder,end1-leftLength,end1-1,inorder,start2,post-1);
    }
    if(rightLength<end2-start2)
    {
        root->left=buildTreeHelper(postorder,start1,end1-rightLength-1,inorder,start2,post-1);
        //root->right=buildTreeHelper(postorder,0,end1-leftLength-1,inorder,post+1,end2);
    }
    return root;
}
	TreeNode * buildTree(vector<int> &postorder, vector<int> &inorder) {
		if(postorder.size()==0||inorder.size()==0||inorder.size()!=postorder.size()) 
			return NULL;
		return buildTreeHelper(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1);
	}
};