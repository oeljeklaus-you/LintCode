class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: if string A contains all of the characters in B return true else return false
     */
    bool compareStrings(string &A, string &B) {
        // write your code here
        if(B.size()==0) return true;
        int a[26]={0};
        for(int i=0;i<A.size();i++)
        {
            a[A[i]-'A']++;
        }
        for(int i=0;i<B.size();i++)
        {
            a[B[i]-'A']--;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]<0) return false;
        }
        return true;
    }
};