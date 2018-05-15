class Solution {
public:
    /**
     * @param matrix: matrix, a list of lists of integers
     * @param target: An integer
     * @return: a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        // write your code here
        if(matrix.size()==0) return false;
        int size=matrix.size();
        int size2=matrix[0].size();
        for(int i=size2-1;i>=0;i--)
        {
            if(matrix[0][i]==target)
            {
                return true;
            }
            else if(matrix[0][i]<target)
            {
                for(int j=1;j<size;j++)
                {
                    if(matrix[j][i]==target)
                    {
                        return true;
                    }
                    else if(matrix[j][i]>target) break;
                }
            }
        }
        return false;
    }
};