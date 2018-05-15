public class Solution {
    /**
     * @param s: A string
     * @return: whether the string is a valid parentheses
     */
   public boolean isValidParentheses(String s) {
        // write your code here
        if(s==null||s.length()==0) return true;
        Stack<String> stack=new Stack();
        stack.push(s.charAt(0)+"");
        for(int i=1;i<s.length();i++)
        {
            if(stack.size()==0)
            {
                stack.push(s.charAt(i)+"");
                continue;
            }
            if((stack.peek()+s.charAt(i)+"").equals("()")||(stack.peek()+s.charAt(i)+"").equals("[]")||(stack.peek()+s.charAt(i)+"").equals("{}"))
            {
                stack.pop();
            }
            else{
                stack.push(s.charAt(i)+"");
            }
        }
        if(stack.size()==0) return true;
        return false;
    }
}