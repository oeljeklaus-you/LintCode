class Solution {
public:
    /*
     * @param num: An integer
     * @return: An integer
     */
    int countOnes(int num) {
        // write your code here
        int times=0;
        while(num)
        {
            num=num&(num-1);
            times++;
        }
        return times;
    }
};