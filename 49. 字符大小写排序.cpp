class Solution {
public:
    /*
     * @param chars: The letter array you should sort by Case
     * @return: nothing
     */
    void sortLetters(string &chars) {
        // write your code here
        if(chars.size()==0) return;
        int low=0;
        int high=chars.size()-1;
        char target='a';
        char tmp;
        while(low<high)
        {
        	while(low<high&&chars[high]<target)
        	{
        		high--;
        	}
        	tmp=chars[high];
        	while(low<high&&chars[low]>='a')
        	{
        		low++;
        	}
        	chars[high]=chars[low];
        	chars[low]=tmp;
        }
    }
};