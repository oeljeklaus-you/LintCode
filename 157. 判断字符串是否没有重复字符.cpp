class Solution {
public:
    /*
     * @param str: A string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        if(str.size()==0) return true;
        sort(str.begin(),str.end());
        int low=0;
        int high=str.size();
        while(low<high)
        {
            if(str[low]==str[low+1]) return false;
            else
                low++;
        }
        return true;
    }
};