class Solution {
public:
    /**
     * @param triangle: a list of lists of integers
     * @return: An integer, minimum path sum
     */
    int minimumTotal(vector<vector<int>> &triangle) {
        // write your code here
        int size=triangle.size();
        int len=triangle[size-1].size();
        vector<int> result{triangle[size-1]};
        for(int j=size-1;j>0;j--)
        {
        	for(int i=0;i<triangle[j].size()-1;i++)
        	{
        		if(result[i]+triangle[j-1][i]>result[i+1]+triangle[j-1][i])
        		{
        			result[i]=result[i+1]+triangle[j-1][i];
        		}
        		else
        		{
        			result[i]=result[i]+triangle[j-1][i];
        		}
        	}
        }
        return result[0];
    }
};