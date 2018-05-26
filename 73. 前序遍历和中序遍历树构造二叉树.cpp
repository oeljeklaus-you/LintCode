class Solution {
public:
    /**
     * @param inorder: A list of integers that inorder traversal of a tree
     * @param postorder: A list of integers that postorder traversal of a tree
     * @return: Root of a tree
     */
    TreeNode* buildTreeHelper(vector<int> &preorder,int start1,int end1,vector<int> &inorder,int start2,int end2)
    {
        //前序第一个就是根节点
        int rootValue=preorder[start1];
        //创建一个节点作为节点
        TreeNode* root=new TreeNode(rootValue);
        //如果中序和后序都是一个节点，那么直接返回
        if(start1==end1)
        {
            if(start2==end2)
             return root;
        }
        //以start2为起点，在中序遍历中找到该值
        int pos=start2;
        //中序遍历中找到这个值
       while(inorder[pos]!=rootValue)
       {
         pos++;
        }
        //左子树起点
        int leftStart=start2+1;
        //找出左子树长度
        int leftLength=pos-start2;
        //右子树起点
        int rightStart=pos+1;
        if(leftLength>0)
            root->left=buildTreeHelper(preorder, start1+1, start1+leftLength, inorder,start2,pos-1);
        if(end2-start2>leftLength)
        9root->right=buildTreeHelper(preorder, start1+leftLength+1, end1,inorder,pos+1, end2);
        return root;
    }

    TreeNode * buildTree(vector<int> &preorder, vector<int> &inorder) {
    // write your code here
        if(preorder.size()==0||inorder.size()==0||inorder.size()!=preorder.size()) return NULL;
        return buildTreeHelper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
    }
};