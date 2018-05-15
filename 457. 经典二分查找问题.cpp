class Solution {
public:
    /*
     * @param nums: An integer array sorted in ascending order
     * @param target: An integer
     * @return: An integer
     */
    int findPosition(vector<int> &nums, int target) {
        // write your code here
       int low=0;
       int high=nums.size()-1;
       while(low<=high)
       {
           int mid=(low+high)/2;
           if(nums[mid]==target) return mid;
           else if(nums[mid]>target)
           {
               high=mid-1;
           }
           else
           {
               low=mid+1;
           }
       }
       return -1;
    }
};