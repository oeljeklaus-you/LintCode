public class Solution {
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b 
     */
    public int aplusb(int a, int b) {
        // write your code here
        int sum,t;
        do{
            sum=a^b;
            t=(a&b)<<1;
            a=sum;
            b=t;
        }while(b!=0);
        return a;
    }
}