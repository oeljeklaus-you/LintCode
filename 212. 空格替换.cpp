class Solution {
public:
    /*
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        // write your code here
        if(length==0) return 0;
        int count=0;
        int i=0;
        int low=length;
        while(string[i]!='\0')
        {
            if(string[i]==' ') count++;
            i++;
        }
        length+=2*count;
        int high=length;
        while(low>=0)
        {
            if(string[low]!=' ')
            {
                string[high]=string[low];
                high--;
            }
            else
            {
                string[high--]='0';
                string[high--]='2';
                string[high--]='%';
            }
            low--;
        }
        return length;
    }
};