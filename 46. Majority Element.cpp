class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: find a  majority number
     */
    int majorityNumber(vector<int> &nums) {
        // write your code here
		//这里利用中位数的性质。        
        if(nums.size()==0) return 0;
        int count=1;
        int result=nums[0];
        for(int i=1;i<nums.size();i++)
        {
        	if(count==0)
        	{
        		result=nums[i];
        	}
        	else if(result==nums[i]){
        		count++;
        	}
        	else
        		count--;
        }
        return result;
    }
};