public class Solution {
    
    /*
     * @param nums1: an integer array
     * @param nums2: an integer array
     * @return: an integer array
     */
    public int[] intersection(int[] nums1, int[] nums2) {
        // write your code here
        if(nums1.length==0||nums2.length==0) return new int[0];
        Map<Integer,Integer> map1=new HashMap<Integer,Integer>();
        for(int i=0;i<nums1.length;i++)
        {
            map1.put(nums1[i],1);
        }
        int count=0;
        HashSet<Integer> set=new HashSet<Integer>();
        for(int i=0;i<nums2.length;i++)
        {
            if(map1.get(nums2[i])!=null)
            {
                set.add(nums2[i]);
            }
        }
        int a[]=new int[set.size()];
        int i=0;
        Iterator<Integer> it=set.iterator();
        while(it.hasNext())
        {
            a[i]=it.next();
            i++;
        }
        return a;
    }
};