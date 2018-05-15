class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        if(A.size()==0) return B;
        else if(B.size()==0) return A;
        int t=A.size()-1;
        A.resize(t+B.size()+1);
        int i=B.size();
        int index=A.size()-1;
        while(i)
        {
            if(A[t]>B[i-1])
            {
                A[index]=A[t];
               
                t--;
            }
            else
            {
                A[index]=B[i-1];
                i--;
                
            }
            index=index-1;
        }
        return A;
    }
};