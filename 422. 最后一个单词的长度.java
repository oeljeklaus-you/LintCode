public class Solution {
    /**
     * @param s: A string
     * @return: the length of last word
     */
    public int lengthOfLastWord(String s) {
        // write your code here
        if("".equals(s)) return 0;
        String[] splits=s.split(" ");
        //if(splits.length<2) return 0;
        return splits[splits.length-1].length();
    }
}