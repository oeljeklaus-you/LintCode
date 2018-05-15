class Solution {
public:
    /*
     * @param A: A list of integers
     * @param elem: An integer
     * @return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
        if(A.size()==0) return 0;
        int low=0;
        int high=A.size()-1;
        int length=A.size();
        while(low<=high)
        {
            if(A[low]==elem)
            {
                for(int i=low;i<high;i++)
                {
                    A[i]=A[i+1];
                }
                A[high]=0;
                length--;
                high--;
            }
            else
            {
                low++;
            }
        }
        return length;
    }
};