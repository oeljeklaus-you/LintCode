class Solution {
public:
    /**
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {
        // write your code her
        if(n<=0) return false;
        int num=(n-1)&n;
        if(num==0) return true;
        return false;
    }
};