class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: A integer indicate the sum of minimum subarray
     */
    int minSubArray(vector<int> &nums) {
        // write your code here
        if(nums.size()==0) return 0;
        vector<int> sum;
        sum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]+sum[i-1]<nums[i])
            {
                sum.push_back(nums[i]+sum[i-1]);
            }
            else
                sum.push_back(nums[i]);
        }
        int min=sum[0];
        for(int i=1;i<sum.size();i++)
        {
            if(min>sum[i])
                min=sum[i];
        }
        return min;
    }
};