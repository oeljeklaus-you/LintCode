class Solution {
public:
    /**
     * @param arrays: k sorted integer arrays
     * @return: a sorted array
     */
     void mergeSortArray(vector<int> &nums1,vector<int> &nums2)
     {
         int size1=nums1.size();
         int size2=nums2.size();
         nums1.resize(size1+size2);
         int index=size1+size2-1;
         while(size2)
         {
             if(nums1[size1-1]>nums2[size2-1])
             {
                 nums1[index]=nums1[size1-1];
                 index--;
                 size1--;
             }
             else
             {
                 nums1[index]=nums2[size2-1];
                 index--;
                 size2--;
             }
         }
     }
    vector<int> mergekSortedArrays(vector<vector<int>> &arrays) {
        // write your code here
        vector<int> result;
        if(arrays.size()==0) return result;
        result=arrays[0];
        for(int i=1;i<arrays.size();i++)
        {
            mergeSortArray(result,arrays[i]);
        }
        return result;
    }
};