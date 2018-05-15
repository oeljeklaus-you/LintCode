class Solution {
public:
    /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
        // write your code here
        if(offset==0||str.size()==0) return;
        //str.reserve();
        offset=offset%str.size();
        char tmp;
        int low=0;
        int high=str.size()-1;
         while(low<high)
        {
            tmp=str[high];
            str[high]=str[low];
            str[low]=tmp;
            low++;
            high--;
        }
        low=offset;
        high=str.size()-1;
        while(low<high)
        {
            tmp=str[high];
            str[high]=str[low];
            str[low]=tmp;
            low++;
            high--;
        }
        low=0;
        high=offset-1;
         while(low<high)
        {
            tmp=str[high];
            str[high]=str[low];
            str[low]=tmp;
            low++;
            high--;
        }
    }
};