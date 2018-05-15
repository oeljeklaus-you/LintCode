class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> &nums) {
        // write your code here
        if(nums.size()==0) return 0;
        vector<int> tmp;
        tmp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]+tmp[i-1]>nums[i])
            {
                tmp.push_back(nums[i]+tmp[i-1]);
            }
            else
            {
                tmp.push_back(nums[i]);
            }
        }
        int sum=tmp[0];
        for(int i=1;i<tmp.size();i++)
        {
            if(tmp[i]>sum)
            {
                sum=tmp[i];
            }
        }
        return sum;
    }
};