class Solution {
public:
    /**
     * @param nums: The integer array you should partition
     * @param k: An integer
     * @return: The index after partition
     */
	/**
	  *.  解题思路，这是一个快排的变种，需要考虑全部数组都比k大的特殊情况
	  */
    int partitionArray(vector<int> &nums, int k) {
        // write your code here
        if(nums.size()==0) return 0;
        int low=0;
        int high=nums.size()-1;
        int target=0;
        while(low<high)
        {
        	while(low<high&&nums[high]>=k)
        	{
        		high--;
        	}
        	target=nums[high];
        	while(low<high&&nums[low]<k)
        	{
        		low++;
        	}
        	nums[high]=nums[low];
        	nums[low]=target;
        }
        if(nums[high]>k) return high;
        return high+1;
    }
};