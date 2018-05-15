class Solution {
public:
    /**
     * @param A: an integer sorted array
     * @param target: an integer to be inserted
     * @return: An integer
     */
    int searchInsert(vector<int> &A, int target) {
        // write your code here
        if(A.size()==0) return 0;
        int low=0;
        int high=A.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(A[mid]==target) return mid;
            else if(A[mid]>target) high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};