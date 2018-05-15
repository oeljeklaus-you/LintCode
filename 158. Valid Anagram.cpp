class Solution {
public:
    /**
     * @param s: The first string
     * @param t: The second string
     * @return: true or false
     */
    bool anagram(string &s, string &t) {
        // write your code here
        if(s.size()==0&&t.size()==0) return true;
        else if(s.size()!=0&&t.size()==0) return false;
        else if(s.size()==0&&t.size()!=0) return false;
        else if(s.size()!=t.size()) return false;
        int a[256]={0};
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'0']++;
        }
        for(int i=0;i<t.size();i++)
        {
            a[t[i]-'0']--;
        }
        for(int i=0;i<256;i++)
        {
            if(a[i]!=0)
            {
                return false;
            }
        }
        return true;;
    }
};