class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: An integer
     */
    int bitSwapRequired(int a, int b) {
        // write your code heref
        if(a==b) return 0;
        int num=a^b;
        int length=0;
        while(num)
        {
            num=num&(num-1);
            length++;
        }
        return length;
    }
};