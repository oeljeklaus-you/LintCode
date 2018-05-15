class Solution {
public:
    /**
     * @param A: An integer array
     * @return: An integer
     */
    int singleNumber(vector<int> &A) {
        // write your code here
        if(A.size()==0) return 0;
        int tmp=A[0];
        for(int i=1;i<A.size();i++)
        {
            tmp^=A[i];
        }
        return tmp;
    }
};