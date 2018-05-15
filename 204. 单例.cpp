class Solution {
    /**
     * @return: The same instance of this class every time
     */
    private static Solution instance=new Solution();
    private Solution()
    {
        
    }
    public static Solution getInstance() {
        // write your code here
        return instance;
    }
};