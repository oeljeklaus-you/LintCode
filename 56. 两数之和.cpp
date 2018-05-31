public class Solution {
    /**
     * @param numbers: An array of Integer
     * @param target: target = numbers[index1] + numbers[index2]
     * @return: [index1 + 1, index2 + 1] (index1 < index2)
     */

    public int[] twoSum(int[] numbers, int target) {
        // write your code here
        //解题思路是hash一下
        HashMap<Integer,Integer> maps=new HashMap<Integer,Integer>();
        for(int i=0;i<numbers.length;i++)
        {
        	maps.put(numbers[i],i);
        }
        int tmp=0;
        int result[]=new int[2];
        for(int i=0;i<numbers.length;i++)
        {
        	tmp=target-numbers[i];
        	if(maps.get(tmp)!=null)
        	{
        		result[0]=i;
        		result[1]=maps.get(tmp);
        		return result;
        	}
        }
        return result;
    }
}