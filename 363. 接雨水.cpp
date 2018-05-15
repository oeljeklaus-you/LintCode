class Solution {
public:
    /**
     * @param heights: a list of integers
     * @return: a integer
     */
    int trapRainWater(vector<int> &heights) {
        // write your code here
        if(heights.size()==0) return 0;
        int low=0;
        int high=heights.size()-1;
        int leftHighest=0;
        int rightHighest=0;
        int water=0;
        while(low<high)
        {
            leftHighest=leftHighest>heights[low]?leftHighest:heights[low];
            rightHighest=rightHighest>heights[high]?rightHighest:heights[high];
            if(leftHighest>rightHighest)
            {
                water+=rightHighest-heights[high--];
            }
            else
            {
                water+=leftHighest-heights[low++];
            }
        }
        return water;
    }
};