class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: An integer denotes the middle number of the array
     */
    int medianHelper(vector<int> &nums,int low,int high)
{
    int first=low;
    int second=high;
    int target=nums[first];
    while(first<second)
    {
        while(first<second&&nums[second]>=target)
        {
            second--;
        }
        nums[first]=nums[second];
        while(first<second&&nums[first]<=target)
        {
            first++;
        }
        nums[second]=nums[first];
    }
    nums[first]=target;
    int len=nums.size()%2==0?(nums.size()/2-1):nums.size()/2;
    if(first==len) return nums[first];
    else if(first>len) return medianHelper(nums,low,first-1);
    else return medianHelper(nums,first+1,high);
}
int median(vector<int> &nums) {
    int low=0;
    int high=nums.size()-1;
    int target=nums[low];
    while(low<high)
    {
        while(low<high&&nums[high]>=target)
        {
            high--;
        }
        nums[low]=nums[high];
        while(low<high&&nums[low]<=target)
        {
            low++;
        }
        nums[high]=nums[low];
    }
    nums[low]=target;
    int len=nums.size()%2==0?(nums.size()/2-1):nums.size()/2;
    if(low==len) return nums[low];
    else if(low>len) return medianHelper(nums,0,low-1);
    else return medianHelper(nums,low+1,nums.size()-1);
}
};