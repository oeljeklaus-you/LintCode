class Solution {
public:
    /**
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findByOrder(vector<int> &nums,int low,int high)
    {
        int result=nums[low];
        for(int i=low+1;i<=high;i++)
        {
            if(nums[i]<result)  result=nums[i];
        }
        return result;
    }
    int findMin(vector<int> &nums) {
        // write your code here
        if(nums.size()==0) return 0;
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(nums[low]>nums[high])
        {
            if(high-low==1)
            {
                mid=high;
                break;
            }
            mid=(low+high)/2;
            if(nums[low]==nums[mid]&&nums[mid]==nums[high])
            {
                return findByOrder(nums,low,high);
            }
            if(nums[mid]>nums[low]) low=mid;
            else if(nums[mid]<nums[high]) high=mid;
        }
        return nums[mid];
    }
};