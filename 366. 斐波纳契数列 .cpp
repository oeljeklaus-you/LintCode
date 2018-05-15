class Solution {
public:
    /**
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
        if(n<=0) return 0;
        if(n<=2) return n-1;
        int first=0;
        int second=1;
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