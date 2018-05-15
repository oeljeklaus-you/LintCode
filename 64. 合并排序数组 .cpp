class Solution {
public:
    /*
     * @param A: sorted integer array A which has m elements, but size of A is m+n
     * @param m: An integer
     * @param B: sorted integer array B which has n elements
     * @param n: An integer
     * @return: nothing
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        int index=m+n;
        while(n)
        {
            if(A[m-1]>B[n-1])
            {
                A[m-1+n]=A[m-1];
                index=m-1+n;
                m--;
            }
            else
            {
                A[index-1]=B[n-1];
                index=index-1;
                n--;
            }
        }
        
    }
};