class Solution {
public:
    /**
     * @param numbers: Give an array numbers of n integer
     * @return: Find all unique triplets in the array which gives the sum of zero.
     */
    vector<vector<int>> threeSum(vector<int> &numbers) {
        vector<vector<int>> result;
        int length=numbers.size();
        if(length<3) return result;
        sort(numbers.begin(),numbers.end());
        int low=0;
        int high=length-1;
        int p=1;
        vector<int> tmp;
        while(low<high)
        {
        	if(p<high&&numbers[low]+numbers[high]+numbers[p]==0)
        	{

     			vector<int> tmp{numbers[low],numbers[p],numbers[high]};
        		result.push_back(tmp);
        		//判断中间元素是否具有重复元素
        		while(p<length-1)
        		{
        			if(numbers[p]==numbers[p+1]) p++;
        			else break;
        		}
        		//判断低为是否具有重复元素
        		while(low<length-1)
        		{
        			if(numbers[low]==numbers[low+1]) low++;
        			else break;
        		}
        		//判断高位是否具有重复元素
        		while(high>0)
        		{
        			if(numbers[high]==numbers[high-1]) high--;
        			else break;
        		}
        		//重置low、p、high
        		if(p>=high-1)
        		{
        			low++;
        			p=low+1;
        			high=length-1;
        		}
        		//正常行走指针
        		else if(p>low) p++;
        		//重置p
          		else 
        			p=low+1;
        	}
        	else if(p<high&&numbers[low]+numbers[high]+numbers[p]>0)
        	{
        		//这里需要重置p
        	    p=low+1;
        		high--;
        	}
        	else 
        	{
        		if(p>=high-1) 
        		{
        			low++;
        			p=low+1;
        			high=length-1;
        		}
        		else p++;
        	}
        }
        return result;
    }
};