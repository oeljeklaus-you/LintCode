class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number and the index of the last number
     */
    vector<int> subarraySum(vector<int> &nums) {
        // write your code here
        vector<int> result;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==0)
            {
                result.push_back(i);
                return result;
            }
            for(int j=i+1;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum==0)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return  result;
                }
            }
            sum=0;
        }
    }
};