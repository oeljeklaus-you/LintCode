class Solution {
public:
    /**
     * @param digits: a number represented as an array of digits
     * @return: the result
     */
    vector<int> plusOne(vector<int> &digits) {
        // write your code here
         reverse(digits.begin(),digits.end());
         int count=0;
         for(int i=0;i<digits.size();i++)
         {
             if(i==0)
             {
                count=(digits[i]+1)/10;
                digits[i]=(digits[i]+1)%10;
                continue;
             }
             int tmp=(digits[i]+count);
             digits[i]=tmp%10;
             count=tmp/10;;
         }
         if(count!=0) digits.push_back(count);
          reverse(digits.begin(),digits.end());
          return digits;
    }
};