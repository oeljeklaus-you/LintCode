class Solution {
public:
    /**
     * @param n: the integer to be reversed
     * @return: the reversed integer
     */
    int reverseInteger(int n) {
        // write your code here
        queue<int> s;
        int count=0;
        if(n<0) count=1;
        n=abs(n);
        while(n)
        {
            int tmp=n%10;
            s.push(tmp);
            n=n/10;
        }
        long sum=0;
        while(s.size())
        {
            if(count==1)
            {
                sum=sum*10-s.front();
            }
            else sum=sum*10+s.front();
            if(sum>pow(2,31)-1||sum<-pow(2,31)) return 0;
            s.pop();
        }
        return sum;
    }
};