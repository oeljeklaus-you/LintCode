public class Solution {
    
    /*
     * @param nums1: an integer array
     * @param nums2: an integer array
     * @return: an integer array
     */
    public int[] intersection(int[] nums1, int[] nums2) {
        // write your code here
        Map<Integer,Integer> map=new HashMap<Integer,Integer>();
        for(int i=0;i<nums1.length;i++)
        {
        	if(map.get(nums1[i])==null)
        	{
        		map.put(nums1[i],1);
        	}else
        	{
        		map.put(nums1[i],map.get(nums1[i])+1);
        	}
        }
        List<Integer> result=new LinkedList<Integer>();
        for(int i=0;i<nums2.length;i++)
        {
        	if(map.get(nums2[i])!=null&&map.get(nums2[i])!=0)
        	{
        		result.add(nums2[i]);
        		map.put(nums2[i],map.get(nums2[i])-1);
        	}
        }
        int[] t=new int[result.size()];
        for(int i=0;i<result.size();i++)
        {
            t[i]=result.get(i);
        }
        return t;
    }
};