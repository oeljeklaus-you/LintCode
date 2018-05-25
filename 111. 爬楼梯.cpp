class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        if(n<=0) return 0;
        if(n<=2) return n;
        int first=1;
        int second=2;
        int i=2;
        while(i<n)
        {
            int tmp=first+second;
            first=second;
            second=tmp;
            i++;
        }
        return second;
    }
};