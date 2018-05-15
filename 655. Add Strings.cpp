class Solution {
public:
    /**
     * @param num1: a non-negative integers
     * @param num2: a non-negative integers
     * @return: return sum of num1 and num2
     */
    string addStrings(string &num1, string &num2) {
        // write your code here
        if(num1.size()==0) return num2;
        else if(num2.size()==0) return num1;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int i=0;
        int j=0;
        int length1=num1.size();
        int length2=num2.size();
        int count=0;
        string s="";
        while(i<length1&&j<length2)
        {
            int tmp1=num1[i]-'0';
            int tmp2=num2[j]-'0';
            s.push_back((tmp1+tmp2+count)%10+'0');
            count=(tmp1+tmp2+count)/10;
            i++;
            j++;
        }
        while(i<length1)
        {
            int tmp1=num1[i]-'0';
            s.push_back((tmp1+count)%10+'0');
            count=(tmp1+count)/10;
            i++;
        }
        while(j<length2)
        {
            int tmp2=num2[j]-'0';
            s.push_back((tmp2+count)%10+'0');
            count=(tmp2+count)/10;
            j++;
        }
        if(count!=0) s.push_back(count+'0');
        reverse(s.begin(),s.end());
        return s;
    }
};