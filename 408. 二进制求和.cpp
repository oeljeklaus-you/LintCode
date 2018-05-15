class Solution {
public:
    /**
     * @param a: a number
     * @param b: a number
     * @return: the result
     */
    string addBinary(string &a, string &b) {
        // write your code here
        if(a.size()==0) return b;
        else if(b.size()==0) return a;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0;
        int j=0;
        int length1=a.size();
        int length2=b.size();
        int count=0;
        string s="";
        while(i<length1&&j<length2)
        {
            int tmp1=a[i]-'0';
            int tmp2=b[j]-'0';
            int tmp=tmp1+tmp2+count;
            s.push_back(tmp%2+'0');
            count=tmp/2;
            i++;
            j++;
        }
        while(i<length1)
        {
            int tmp1=a[i]-'0';
            int tmp=tmp1+count;
            s.push_back(tmp%2+'0');
            count=tmp/2;
            i++;
        }
        while(j<length2)
        {
            int tmp1=b[j]-'0';
            int tmp=tmp1+count;
            s.push_back(tmp%2+'0');
            count=tmp/2;
            j++;
        }
        if(count!=0) s.push_back(count+'0');
        reverse(s.begin(),s.end());
        return s;
    }
};