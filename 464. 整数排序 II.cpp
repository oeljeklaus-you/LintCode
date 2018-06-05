class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortHelper(vector<int> &A,int low,int high)
    {
        if(low>=high) return;
        int first=low;
        int second=high;
        int target=A[first];
        while(first<second)
        {
            while(first<second&&A[second]>=target)
            {
                second--;
            }
            A[first]=A[second];
            while(first<second&&A[first]<=target)
            {
                first++;
            }
            A[second]=A[first];
        }
        A[first]=target;
        sortHelper(A,low,first-1);
        sortHelper(A,first+1,high);
    }
    void sortIntegers2(vector<int> &A) {
        // write your code here
        sortHelper(A,0,A.size()-1);
    }
};