public class Solution {
    /**
     * @param A: a string
     * @param B: a string
     * @return: a boolean
     */
    public boolean Permutation(String A, String B) {
        // write your code here
        if(A==null) return false;
        else if(A.length()==0&&B.length()!=0) return false;
        Map<Character,Integer> maps=new HashMap<Character,Integer>();
        for(int i=0;i<A.length();i++)
        {
            if(maps.get(A.charAt(i))!=null)
            {
                maps.put(A.charAt(i),maps.get(A.charAt(i))+1);
            }
            else
                maps.put(A.charAt(i),1);
        }
        for(int i=0;i<B.length();i++)
        {
            if(maps.get(B.charAt(i))!=null)
            {
                maps.put(B.charAt(i),maps.get(B.charAt(i))+1);
            }
            else
                maps.put(B.charAt(i),1);
        }
        for(Integer i:maps.values())
        {
            if(i%2!=0) return false;
        }
        return true;
    }
}