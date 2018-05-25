class Solution {
public:
    /**
     * @param matrix: A list of lists of integers
     * @param target: An integer you want to search in matrix
     * @return: An integer indicate the total occurrence of target in the given matrix
     */
    int searchMatrix(vector<vector<int>> &matrix, int target) {
        // write your code here
        if(matrix.size()==0) return 0;
        int count=0;
        int length=matrix[0].size();
        for(int i=0;i<length;i++)
        {
            if(matrix[0][i]==target)
            {
                count++;
                continue;
            }
            else if(matrix[0][i]<target)
            {
                for(int j=1;j<matrix.size();j++)
                {
                    if(matrix[j][i]==target)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        return count;
    }
};